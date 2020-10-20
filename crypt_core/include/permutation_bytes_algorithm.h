#pragma once

#include "algorithm.h"

namespace crypt_core
{

class permutation_bytes_algorithm : public algorithm
{
public:
    permutation_bytes_algorithm();
    virtual ~permutation_bytes_algorithm();

    virtual void encrypt(std::string& data);

    virtual void decrypt(std::string& data);

    virtual void set_key(std::string& key);

private:
    std::string key_;
};

}