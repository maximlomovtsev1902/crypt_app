#pragma once

#include <string>

namespace crypt_core
{

/// @brief Interface which describes protector object
struct protector
{
    /// @brief Encrypt data
    /// @param[in, out] data - data for encrypt
    virtual void encrypt(std::string& data) = 0;

    /// @brief Decrypt data
    /// @param[in, out] data - data for decrypt
    virtual void decrypt(std::string& data) = 0;

    /// @brief Set key for encrypt/decrypt
    /// @param[in] key - key for encypt/decrypt
    virtual void set_key(std::string& key) = 0;
};

} // crypt_core