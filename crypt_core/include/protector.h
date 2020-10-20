#pragma once

#include <string>

namespace crypt_core
{

class protector
{
    virtual void encrypt(std::string& data) = 0;

    virtual void decrypt(std::string& data) = 0;

    virtual void set_key(std::string& key) = 0;
};

}