#pragma once

#include "algorithm.h"

namespace crypt_core
{

class permutation_bits_algorithm : public algorithm
{
public:
    permutation_bits_algorithm();
    virtual ~permutation_bits_algorithm();

    virtual void encrypt(std::string& data);

    virtual void decrypt(std::string& data);

    virtual void set_key(std::string& key);

private:
    std::string key_;
};

}