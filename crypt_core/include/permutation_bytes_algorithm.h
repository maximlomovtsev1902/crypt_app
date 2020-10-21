#pragma once

#include "algorithm.h"

namespace crypt_core
{

/// @brief Algorithm which uses permutation bytes for encryp/decrypt
class permutation_bytes_algorithm : public algorithm
{
public:
    /// @see algorithm
    virtual void encrypt(std::string& data);

    /// @see algorithm
    virtual void decrypt(std::string& data);

    /// @see algorithm
    virtual void set_key(std::string& key);
};

} // crypt_core