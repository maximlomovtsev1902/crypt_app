#include "steganography_algorithm.h"

namespace crypt_core
{

steganography_algorithm::steganography_algorithm(std::string& _data, std::string& _key)
    : data_(_data)
    , key_(_key)
{

}

steganography_algorithm::~steganography_algorithm()
{

}

void steganography_algorithm::execute()
{

}

void steganography_algorithm::set_key(std::string& key)
{

}

std::string& steganography_algorithm::get_data()
{
    return std::string();
}

}