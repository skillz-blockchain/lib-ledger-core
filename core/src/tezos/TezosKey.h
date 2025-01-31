/*
 *
 * TezosKey
 * ledger-core
 *
 * Created by Axel Haustant on 10/09/2020.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Ledger
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
#ifndef LEDGER_CORE_TEZOSKEY_H
#define LEDGER_CORE_TEZOSKEY_H

#include "../utils/optional.hpp"
#include <vector>
#include <api/TezosCurve.hpp>

namespace ledger {
    namespace core {
        /**
         * This namespace holds Tezos Key management constants and helpers
         */
        namespace TezosKeyType {

            /**
             * Specify a Tezos Key type encoding
             */
            struct Encoding {
                std::string prefix;
                std::vector<uint8_t> version;
                api::TezosCurve curve;
                int length;
                int b58_length;
                std::string label;
            };

            std::ostream &operator<<(std::ostream &os, const Encoding &e);

            const Encoding EDPK{"edpk", {13, 15, 37, 217}, api::TezosCurve::ED25519, 32, 54,
                                "ED25519 public key"};

            const Encoding SPPK{"sppk", {3, 254, 226, 86}, api::TezosCurve::SECP256K1, 33, 55,
                                "SECP256K1 public key"};

            const Encoding P2PK{"p2pk", {3, 178, 139, 127}, api::TezosCurve::P256, 33, 55,
                                "P256 public key"};

            const Encoding XPUB{"xpub", {4, 136, 178, 30}, api::TezosCurve::ED25519, 33, 55,
                                "Legacy XPUB public key"};

            
            const Encoding TZ1{"tz1", {6, 161, 159}, api::TezosCurve::ED25519, 20, 36,
                               "ED25519 public key hash"};

            const Encoding TZ2{"tz2", {6, 161, 161}, api::TezosCurve::SECP256K1, 20, 36,
                               "SECP256k1 public key hash"};
            
            const Encoding TZ3{"tz3", {6, 161, 164}, api::TezosCurve::P256, 20, 36,
                               "P256 public key hash"};
            
            const Encoding KT1{"KT1", {2, 90, 121}, api::TezosCurve::ED25519, 20, 36,
                               "Originated address"};

            const Encoding SIG{"sig", {4, 130, 43}, api::TezosCurve::ED25519, 64, 96,
                               "generic signature"};
            
            const Encoding EDSIG{"edsig", {9, 245, 205, 134, 18}, api::TezosCurve::ED25519, 64, 99,
                                 "ed25519 signature"};

            const Encoding SPSIG{"spsig", {13, 115, 101, 19, 63}, api::TezosCurve::SECP256K1, 64, 99,
                                 "secp256k1 signature"};
            
            const Encoding P2SIG{"p2sig", {54, 240, 44, 52}, api::TezosCurve::P256, 64, 99, 
                                 "p256 signature"};

            const std::vector<Encoding> ALL = {EDPK, SPPK, P2PK, XPUB, TZ1, TZ2, TZ3, KT1};

            const std::vector<Encoding> PUBKEYS = {EDPK, SPPK, P2PK};

            const std::vector<Encoding> LEGACY_PUBKEYS = {EDPK, SPPK, P2PK, XPUB};

            const std::vector<Encoding> ADDRESSES = {TZ1, TZ2, TZ3, KT1};

            const std::vector<Encoding> SIGNATURES = {EDSIG, SPSIG, P2SIG, SIG};

            /**
             * Get the key encoding definition for a given version
             */
            std::experimental::optional<Encoding> fromVersion(std::vector<uint8_t> version);

            /**
             * Get the key encoding definition for a given base58 key
             */
            std::experimental::optional<Encoding> fromBase58(std::string key);

            /**
             * Get the key encoding definition for a given curve given a key type class
             */
            std::experimental::optional<Encoding> fromCurve(api::TezosCurve curve, std::vector<Encoding> types=ALL);

            /**
             * Get the key encoding definition for a given key
             */
            std::experimental::optional<Encoding> fromKey(std::vector<uint8_t> key);
        }
    }
}
#endif //LEDGER_CORE_TEZOSKEY_H
