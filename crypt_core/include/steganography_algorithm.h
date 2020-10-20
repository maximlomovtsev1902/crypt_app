#pragma once

#include "algorithm.h"

namespace crypt_core
{

class steganography_algorithm : public algorithm
{
public:
    steganography_algorithm();
    virtual ~steganography_algorithm();

    virtual void encrypt(std::string& data);

    virtual void decrypt(std::string& data);

    virtual void set_key(std::string& key);

private:
    std::string key_;
};

}