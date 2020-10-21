#pragma once

#include <string>

namespace crypt_core
{

/// @brief Encrypt/decrypt algorithm interface
class algorithm
{
public:
    /// @brief Encrypt data
    /// @param[in, out] data - data for encrypt
    virtual void encrypt(std::string& data) = 0;

    /// @brief Decrypt data
    /// @param[in, out] data - data for decrypt
    virtual void decrypt(std::string& data) = 0;

    /// @brief Set key for encrypt/decrypt algorithm
    /// @param[in] key - key
    virtual void set_key(std::string& key) = 0;

protected:
    /// Key for encrypt/decrypt
    std::string key_;
};

} // crypt_core