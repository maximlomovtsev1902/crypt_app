#pragma once

#include "algorithm.h"
#include "protector.h"

#include <list>

namespace crypt_core
{

class protector_impl : public protector
{
public:
    protector_impl(std::string& _key);
    virtual ~protector_impl();

    virtual std::string encrypt(std::string& data);

    virtual std::string decrypt(std::string& data);

    virtual void set_key(std::string& key);

private:
    std::string& key_;
    std::list<crypt_core::algorithm> algorithm_list_;
};

}