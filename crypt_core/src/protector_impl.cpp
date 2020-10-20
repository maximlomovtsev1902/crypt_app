#include "protector_impl.h"

namespace crypt_core
{

protector_impl::protector_impl(std::string& _key)
    : key_(_key)
    , algorithm_list_()
{

}

protector_impl::~protector_impl()
{

}

std::string protector_impl::encrypt(std::string& data)
{
    return std::string();
}

std::string protector_impl::decrypt(std::string& data)
{
    return std::string();
}

void protector_impl::set_key(std::string& key)
{

}

}