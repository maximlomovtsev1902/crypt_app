#pragma once

#include "algorithm.h"
#include "permutation_bits_algorithm.h"
#include "permutation_bytes_algorithm.h"
#include "steganography_algorithm.h"
#include "protector.h"

#include <list>
#include <memory>

namespace crypt_core
{

/// @brief Object which defend data. It uses crypto algorithms.S
class protector_impl : public protector
{
public:
    /// @brief Constructor. Init crypto algorithms
    protector_impl();

    /// @see protector
    virtual void encrypt(std::string& data);

    /// @see protector
    virtual void decrypt(std::string& data);

    /// @see protector
    virtual void set_key(std::string& key);

private:
    /// Key for encryp/decrypt
    std::string key_;

    /// Crypto algorithm list
    std::list<std::unique_ptr<crypt_core::algorithm>> algorithm_list_;
};

} // crypt_core