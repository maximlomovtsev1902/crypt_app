#pragma once

#include <string>

namespace crypt_core
{

class algorithm
{
public:
    virtual void encrypt(std::string& data);

    virtual void decrypt(std::string& data);

    virtual void set_key(std::string& key);
};

}