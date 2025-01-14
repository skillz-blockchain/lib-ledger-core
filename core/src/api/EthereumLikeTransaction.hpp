// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#ifndef DJINNI_GENERATED_ETHEREUMLIKETRANSACTION_HPP
#define DJINNI_GENERATED_ETHEREUMLIKETRANSACTION_HPP

#include "../utils/optional.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class Amount;
class EthereumLikeAddress;
class EthereumLikeBlock;

/** Class representing a Ethereum transaction. */
class LIBCORE_EXPORT EthereumLikeTransaction {
public:
    virtual ~EthereumLikeTransaction() {}

    /** Get the hash of the transaction. */
    virtual std::string getHash() = 0;

    /** Get the nonce of the transaction : sequence number issued by originating EOA. */
    virtual int32_t getNonce() = 0;

    /** Get Gas price (in wei). */
    virtual std::shared_ptr<Amount> getGasPrice() = 0;

    /** Get start gas (in wei) : maximum amount of gas the originator is willing to pay. */
    virtual std::shared_ptr<Amount> getGasLimit() = 0;

    /** Effective used gas. */
    virtual std::shared_ptr<Amount> getGasUsed() = 0;

    /** Get destination ETH address. */
    virtual std::shared_ptr<EthereumLikeAddress> getReceiver() = 0;

    /** Get ETH sender address. */
    virtual std::shared_ptr<EthereumLikeAddress> getSender() = 0;

    /** Get amount of ether to send. */
    virtual std::shared_ptr<Amount> getValue() = 0;

    /** Get binary data payload. */
    virtual std::experimental::optional<std::vector<uint8_t>> getData() = 0;

    /** Get status of transaction: equals to 1 if succeeded, 0 otherwise */
    virtual int32_t getStatus() = 0;

    /** Get correlation id */
    virtual std::string getCorrelationId() = 0;

    /**
     * Set the correlation id which can be used to debug transaction errors
     * through the full ledger stack
     * @return the OLD Correlation ID, if it was set (empty string if it was unset)
     */
    virtual std::string setCorrelationId(const std::string & correlationId) = 0;

    /** Serialize the transaction to its raw format. */
    virtual std::vector<uint8_t> serialize() = 0;

    /** Set signature of transaction, when a signature is set serialize method gives back serialized Tx. */
    virtual void setSignature(const std::vector<uint8_t> & vSignature, const std::vector<uint8_t> & rSignature, const std::vector<uint8_t> & sSignature) = 0;

    virtual void setDERSignature(const std::vector<uint8_t> & signature) = 0;

    virtual void setVSignature(const std::vector<uint8_t> & vSignature) = 0;

    /**
     * Get the time when the transaction was issued or the time of the block including this
     * transaction.
     */
    virtual std::chrono::system_clock::time_point getDate() = 0;

    /** Get block to which transaction belongs (was mined in). */
    virtual std::shared_ptr<EthereumLikeBlock> getBlock() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_ETHEREUMLIKETRANSACTION_HPP
