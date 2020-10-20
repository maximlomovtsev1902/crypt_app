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

class protector_impl : public protector
{
public:
    protector_impl();
    virtual ~protector_impl();

    virtual void encrypt(std::string& data);

    virtual void decrypt(std::string& data);

    virtual void set_key(std::string& key);

private:
    std::string key_;
    std::list<std::unique_ptr<crypt_core::algorithm>> algorithm_list_;
};

}