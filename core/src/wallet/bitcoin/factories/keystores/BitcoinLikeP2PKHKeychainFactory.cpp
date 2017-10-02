/*
 *
 * BitcoinLikeP2PKHKeychainFactory
 * ledger-core
 *
 * Created by Pierre Pollastri on 14/06/2017.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */
#include <async/Promise.hpp>
#include "BitcoinLikeP2PKHKeychainFactory.h"
#include <wallet/bitcoin/keychains/P2PKHBitcoinLikeKeychain.hpp>

namespace ledger {
    namespace core {

        FuturePtr<ledger::core::BitcoinLikeKeychain>
        BitcoinLikeP2PKHKeychainFactory::build(const std::shared_ptr<api::ExecutionContext> &context,
                                               int32_t index,
                                               const DerivationPath &path,
                                               const std::shared_ptr<DynamicObject> &configuration,
                                               const api::ExtendedKeyAccountCreationInfo& info,
                                               const std::shared_ptr<Preferences> &accountPreferences,
                                               const api::Currency &currency) {
            PromisePtr<BitcoinLikeKeychain> p;
            if (!info.extendedKeys.empty()) {
                auto xpub = make_try<std::shared_ptr<BitcoinLikeExtendedPublicKey>>([&] () -> std::shared_ptr<BitcoinLikeExtendedPublicKey> {
                    return BitcoinLikeExtendedPublicKey::fromBase58(
                            currency.bitcoinLikeNetworkParameters.value(),
                            info.extendedKeys[0],
                            Option<std::string>(path.toString())
                    );
                });
                if (xpub.isFailure()) {
                    p.failure(xpub.getFailure());
                } else {
                    auto keychain = std::make_shared<P2PKHBitcoinLikeKeychain>(
                            configuration, currency, index, xpub.getValue(), accountPreferences
                    );
                    p.success(keychain);
                }
            } else {
                p.failure(make_exception(api::ErrorCode::MISSING_DERIVATION, "Cannot find derivation {}", path.toString()));
            }
            return p.getFuture();
        }

        FuturePtr<ledger::core::BitcoinLikeKeychain>
        BitcoinLikeP2PKHKeychainFactory::restore(const std::shared_ptr<api::ExecutionContext> &context,
                                                 int32_t index,
                                                 const DerivationPath &path,
                                                 const std::shared_ptr<DynamicObject> &configuration,
                                                 const std::string &databaseXpubEntry,
                                                 const std::shared_ptr<Preferences> &accountPreferences,
                                                 const api::Currency &currency) {
            PromisePtr<BitcoinLikeKeychain> promise;

            return promise.getFuture();
        }
    }
}