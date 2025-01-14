/*
 *
 * account_creation_tests.cpp
 * ledger-core
 *
 * Created by Pierre Pollastri on 29/09/2017.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Ledger
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

#include "BaseFixture.h"
#include "api/TezosConfiguration.hpp"
#include "api/TezosConfigurationDefaults.hpp"

class AccountCreationTest : public BaseFixture {};

TEST_F(AccountCreationTest, CreateBitcoinAccountWithInfo) {
    auto pool = newDefaultPool();
    const auto walletName = "my_wallet_createbtcaccountwithinfo";
    auto wallet = uv::wait(pool->createWallet(walletName, "bitcoin", DynamicObject::newInstance()));
    auto account = std::dynamic_pointer_cast<BitcoinLikeAccount>(uv::wait(wallet->newAccountWithInfo(P2PKH_MEDIUM_KEYS_INFO)));
    auto address = uv::wait(account->getFreshPublicAddresses())[0]->toString();
    EXPECT_EQ(address, "1DDBzjLyAmDr4qLRC2T2WJ831cxBM5v7G7");
    uv::wait(pool->deleteWallet(walletName));
}

TEST_F(AccountCreationTest, CreateBitcoinAccountWithInfoOnExistingWallet) {
    const auto walletName = "my_wallet_createbtcaccountwithinfo_existingwallet";
    auto pool = newDefaultPool();
    {
        auto wallet = uv::wait(pool->createWallet(walletName, "bitcoin", DynamicObject::newInstance()));
    }
    {
        EXPECT_THROW(uv::wait(pool->createWallet(walletName, "bitcoin", DynamicObject::newInstance())), Exception);
        auto wallet = uv::wait(pool->getWallet(walletName));
        auto account = std::dynamic_pointer_cast<BitcoinLikeAccount>(uv::wait(wallet->newAccountWithInfo(P2PKH_MEDIUM_KEYS_INFO)));
        auto address = uv::wait(account->getFreshPublicAddresses())[0]->toString();
        EXPECT_EQ(address, "1DDBzjLyAmDr4qLRC2T2WJ831cxBM5v7G7");
        uv::wait(pool->deleteWallet(walletName));
    }
}

#ifdef _WIN32
TEST_F(AccountCreationTest, DISABLED_ChangePassword) { // Change password of DB file doesn't work in windows
#elif PG_SUPPORT
TEST_F(AccountCreationTest, DISABLED_ChangePassword) { // Change password of DB doesn't work with Postgres
#else
TEST_F(AccountCreationTest, ChangePassword) {
#endif
    auto oldPassword = "";
    auto newPassword = "new_test";

    // Create wallet, account ... in plain DB
    auto pool = newDefaultPool("my_pool", oldPassword);
    const auto walletName = "my_wallet_changepassword";
    {
        auto wallet = uv::wait(pool->createWallet(walletName, "bitcoin", DynamicObject::newInstance()));
        auto account = std::dynamic_pointer_cast<BitcoinLikeAccount>(uv::wait(wallet->newAccountWithInfo(P2PKH_MEDIUM_KEYS_INFO)));
        auto address = uv::wait(account->getFreshPublicAddresses())[0]->toString();
        EXPECT_EQ(address, "1DDBzjLyAmDr4qLRC2T2WJ831cxBM5v7G7");
    }

    auto changePasswordAndGetInfos = [walletName] (const std::shared_ptr<WalletPool> &walletPool, const std::string &oldPassword, const std::string &newPassword) {
        uv::wait(walletPool->changePassword(oldPassword, newPassword));
        {
            auto wallet = uv::wait(walletPool->getWallet(walletName));
            auto account = std::dynamic_pointer_cast<BitcoinLikeAccount>(uv::wait(wallet->getAccount(0)));
            auto address = uv::wait(account->getFreshPublicAddresses())[0]->toString();
            EXPECT_EQ(address, "1DDBzjLyAmDr4qLRC2T2WJ831cxBM5v7G7");
        }
    };

    changePasswordAndGetInfos(pool, "", "new_test");
    changePasswordAndGetInfos(pool, "new_test", "new_test_0");
    changePasswordAndGetInfos(pool, "new_test_0", "");
    uv::wait(pool->deleteWallet(walletName));
}

TEST_F(AccountCreationTest, CreateBitcoinAccountTwiceShouldRaiseError) {
    auto pool = newDefaultPool();
    const auto walletName = "my_wallet_createbtcaccountwithinfo";
    auto wallet = uv::wait(pool->createWallet(walletName, "bitcoin", DynamicObject::newInstance()));
    auto account = std::dynamic_pointer_cast<BitcoinLikeAccount>(uv::wait(wallet->newAccountWithInfo(P2PKH_MEDIUM_KEYS_INFO)));
    try
    {
        uv::wait(wallet->newAccountWithInfo(P2PKH_MEDIUM_KEYS_INFO));
    }
    catch(const ledger::core::Exception& e)
    {
        EXPECT_EQ(e.getErrorCode(), ledger::core::api::ErrorCode::ACCOUNT_ALREADY_EXISTS);
    }
    catch(...)
    {
        ADD_FAILURE() << "Expected ledger::core::Exception exception";
    }
    uv::wait(pool->deleteWallet(walletName));
}

TEST_F(AccountCreationTest, CreateTezosAccountTwiceShouldRaiseError) {
    auto pool = newDefaultPool();
    auto configuration = DynamicObject::newInstance();
    configuration->putString(api::TezosConfiguration::TEZOS_XPUB_CURVE, api::TezosConfigurationDefaults::TEZOS_XPUB_CURVE_ED25519);
    const auto walletName = "my_wallet_createbtcaccountwithinfo";
    auto wallet = uv::wait(pool->createWallet(walletName, "tezos", configuration));
    auto account = std::dynamic_pointer_cast<BitcoinLikeAccount>(uv::wait(wallet->newAccountWithInfo(XTZ_KEYS_INFO)));
    try
    {
        uv::wait(wallet->newAccountWithInfo(XTZ_KEYS_INFO));
    }
    catch(const ledger::core::Exception& e)
    {
        EXPECT_EQ(e.getErrorCode(), ledger::core::api::ErrorCode::ACCOUNT_ALREADY_EXISTS);
    }
    catch(...)
    {
        ADD_FAILURE() << "Expected ledger::core::Exception exception";
    }
    uv::wait(pool->deleteWallet(walletName));
}
