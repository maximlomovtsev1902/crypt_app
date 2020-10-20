#include "protector_impl.h"

namespace crypt_core
{

protector_impl::protector_impl()
    : key_()
    , algorithm_list_()
{
    algorithm_list_.push_back(std::make_unique<crypt_core::algorithm>(new permutation_bits_algorithm()));
    algorithm_list_.push_back(std::make_unique<crypt_core::algorithm>(new permutation_bytes_algorithm()));
    algorithm_list_.push_back(std::make_unique<crypt_core::algorithm>(new steganography_algorithm()));
}

protector_impl::~protector_impl()
{

}

void protector_impl::encrypt(std::string& data)
{
    for(std::list<std::unique_ptr<crypt_core::algorithm>>::iterator iter = algorithm_list_.begin();
        iter != algorithm_list_.end();
        iter++)
    {
        (*iter)->encrypt(data);
    }
}

void protector_impl::decrypt(std::string& data)
{
    for(std::list<std::unique_ptr<crypt_core::algorithm>>::iterator iter = algorithm_list_.end();
        iter != algorithm_list_.begin();
        iter--)
    {
        (*iter)->decrypt(data);
    }
}

void protector_impl::set_key(std::string& key)
{
    for(std::list<std::unique_ptr<crypt_core::algorithm>>::iterator iter = algorithm_list_.begin();
        iter != algorithm_list_.end();
        iter++)
    {
        (*iter)->set_key(key);
    }
}

}