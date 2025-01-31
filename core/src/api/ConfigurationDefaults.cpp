// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#include "ConfigurationDefaults.hpp"  // my header

namespace ledger { namespace core { namespace api {

std::string const ConfigurationDefaults::BLOCKCHAIN_DEFAULT_API_ENDPOINT = {"https://explorers.api.live.ledger.com"};

std::string const ConfigurationDefaults::BLOCKCHAIN_OBSERVER_WS_ENDPOINT = {"wss://ws.ledgerwallet.com/blockchain/v2/{}/ws"};

std::string const ConfigurationDefaults::BIP44_DERIVATION_SCHEME = {"44'/<coin_type>'/<account>'/<node>/<address>"};

std::string const ConfigurationDefaults::DEFAULT_KEYCHAIN = {"BIP32_P2PKH"};

int32_t const ConfigurationDefaults::DEFAULT_TRUST_LIMIT = 3;

int32_t const ConfigurationDefaults::KEYCHAIN_DEFAULT_OBSERVABLE_RANGE = 20;

int32_t const ConfigurationDefaults::DEFAULT_TTL_CACHE = 30;

int32_t const ConfigurationDefaults::DEFAULT_PG_CONNECTION_POOL_SIZE = 25;

int32_t const ConfigurationDefaults::DEFAULT_BTC_LIKE_MEMPOOL_GRACE = 900;

} } }  // namespace ledger::core::api
