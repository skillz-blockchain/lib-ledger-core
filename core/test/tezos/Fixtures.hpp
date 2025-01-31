#ifndef __TEZOS_FIXTURES_H_
#define __TEZOS_FIXTURES_H_

#include <string>
#include <api/AccountCreationInfo.hpp>
#include <api/DynamicObject.hpp>
#include <api/TezosConfiguration.hpp>
#include <api/TezosConfigurationDefaults.hpp>
#include <wallet/tezos/TezosLikeWallet.h>
#include <wallet/tezos/TezosLikeAccount.h>
#include <wallet/tezos/transaction_builders/TezosLikeTransactionBuilder.h>
#include <wallet/tezos/api_impl/TezosLikeTransactionApi.h>
#include <test/integration/IntegrationEnvironment.h>

#include "../integration/BaseFixture.h"

using namespace ledger::core;

namespace ledger {
    namespace testing {
        namespace tezos {

            struct TestKey {
                std::string address;
                std::string secret;
                std::string hexkey;
                std::string pubkey;
            };

            const TestKey KEY_ED25519{
                "tz1eQLbY12XuaXEVv7LgsLbKAnN6jGrqm8sA",
                "edsk311eAbqyE5Lb3pPMrz971pi1QdZRhcDH4BUXmqWDpXqiK7bfJF",
                "32A6CAA0067135EAF35659344A578DEB64A1F4D28484C052C4F29627893B1EF1",
                "edpku2XmANX3SWPYvUh5mEdiXcRQs9YKK9DRaJ5aT8dr9juNsteXMp",
            };

            const TestKey KEY_SECP256K1{
                "tz2B7ibGZBtVFLvRYBfe4Q9uw7SRE62MKZCD",
                "spsk2H1ZAPGcRzgKS4h7i2RvdDMgKXhJxAjwHtUiKpeQ6Lg8EscfGo",
                "0227FC9F1B016476CDC93FBF2E529BB93429BAE451F4397E911F374EEF36A04784",
                "sppk7ZcFGJdaCVj9oDf5MBMVdFuL3Wm4Y39uv4URA5pcJ1mfEPePTYx",
            };

            const TestKey KEY_P256{
                "tz3bnhbn7uYfL43zfXtBvCYoq6DW743mRWvc",
                "p2sk2NEsV4VibjetudyeERg7iDy64sY2MxKFvC3xbB1oqj2Q4uQeaX",
                "0313E0FE2062532D390A726EB7F78BE03609796A930F6FABA4349FDF1C96365973",
                "p2pk66ffLoWNNC1useG68cKfRqmfoujyYha9KuCAWb3RM6oth5KnR1Q",
            };

            const TestKey KEY_ED25519_SECOND{
                "tz1i3a9PkjGVt8aWNDxnDF9VHdf3KemtZe33",
                "edsk31hm6WVH9pQqfW6f3cY3JyYeFGKNxpprGEsHJVNo7h5qBDhRfT",
                "9B7472C65583E7DAA80DD51583F7D3C4FC27596DFFE1A3C26CF6800337FE7726",
                "edpkupgph2pZR7oRA36aJEsxE54D5WDixv3KCJThH7hssvj87d4Xeu",
            };

            const TestKey KEY_ED25519_THIRD{
                "tz1YnM9JMYof5yKXzs3XptoJ1RMf1Ri7RuGF",
                "edsk4HyqqyU1Re7SakU5CYkt4NeWPtcx3Q4Chq5iQFyL9sQo9QoBKL",
                "FC4E4F37DED512650CA89DFFE6C622A96A20F375D56331174C17C7B25F3775C7",
                "edpkvZLkbFgjXLTqa193cDmrsWAo5Q7upHZMxacrobhQZUyTVU4ELs",
            };

            const TestKey KEY_SECP256K1_SECOND{
                "tz29J6gQdA4Y9Qi5AhNZGMhQUpr9TwLPNByC",
                "spsk2zADDbxbuEtcLK9G3tqvs5kX3j4Vr6TqRzQz5VvEjNhrA4vWfJ",
                "0247EA904A9456E06232533A80A2C5BC9F50417755504025D8F556D259DA66E457",
                "sppk7ZrJrq1qbRRzpXP2JfWuF9DhvgLpePj4c52oYmXLweCDWaydAGy",
            };

            struct TezosTestData {
                api::TezosCurve curve;
                std::string cfgCurve;
                TestKey key;
            };

            struct TezosBaseTest : public ::testing::TestWithParam<TezosTestData> {
                public:
                TezosBaseTest() {
                    TezosTestData data = GetParam();
                    auto configuration = DynamicObject::newInstance();
                    // configuration->putString(api::Configuration::BLOCKCHAIN_EXPLORER_ENGINE, api::BlockchainExplorerEngines::TZSTATS_API);
                    configuration->putString(api::TezosConfiguration::TEZOS_XPUB_CURVE, data.cfgCurve);
                }
            };

            ::testing::internal::ParamGenerator<TezosTestData> TezosParams();

            std::string TezosParamsNames(const ::testing::TestParamInfo<TezosBaseTest::ParamType>& info);

            // Legacy fixture extracted from core/test/fixtures/xtz_fixtures.h
            extern api::AccountCreationInfo XPUB_INFO;
			extern const std::string TX_1;
			extern const std::string TX_2;
			extern const std::string TX_3;
			extern const std::string TX_4;
			extern const std::string TX_5;
			extern const std::string TX_6;
			extern const std::string TX_7;
			extern const std::string TX_8;

			std::shared_ptr<core::TezosLikeAccount> inflate(
                const std::shared_ptr<core::WalletPool>& pool,
                const std::shared_ptr<core::AbstractWallet>& wallet
            );

            std::shared_ptr<core::TezosLikeAccount> inflate_ED25519(
                const std::shared_ptr<core::WalletPool>& pool,
                const std::shared_ptr<core::AbstractWallet>& wallet
            );

            std::shared_ptr<core::TezosLikeAccount> inflate_SECP256K1(
                const std::shared_ptr<core::WalletPool>& pool,
                const std::shared_ptr<core::AbstractWallet>& wallet
            );

            std::shared_ptr<core::TezosLikeAccount> inflate_P256(
                const std::shared_ptr<core::WalletPool>& pool,
                const std::shared_ptr<core::AbstractWallet>& wallet
            );

            struct TransactionTestData {
                std::shared_ptr<api::DynamicObject> configuration;
                std::string walletName;
                std::string currencyName;
                std::function<std::shared_ptr<TezosLikeAccount> (const std::shared_ptr<WalletPool>&,
                                                                const std::shared_ptr<AbstractWallet>& )> inflate_xtz;
            };

        }
    }
}

#endif // __TEZOS_FIXTURES_H_
