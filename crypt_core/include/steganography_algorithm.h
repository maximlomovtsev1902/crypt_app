#pragma once

#include "algorithm.h"

namespace crypt_core
{

class steganography_algorithm : public algorithm
{
public:
    steganography_algorithm(std::string& _data, std::string& _key);
    virtual ~steganography_algorithm();

    virtual void execute();

    virtual void set_key(std::string& key);

    virtual std::string& get_data();

private:
    std::string& data_;
    std::string& key_;
};

}