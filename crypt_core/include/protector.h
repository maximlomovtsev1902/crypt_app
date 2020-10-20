#pragma once

#include <string>

namespace crypt_core
{

class protector
{
    virtual std::string encrypt(std::string& data) = 0;

    virtual std::string decrypt(std::string& data) = 0;

    virtual void set_key(std::string& key) = 0;
};

}