#include "steganography_algorithm.h"

namespace crypt_core
{

steganography_algorithm::steganography_algorithm()
    : key_()
{

}

steganography_algorithm::~steganography_algorithm()
{

}

void steganography_algorithm::encrypt(std::string& data)
{

}

void steganography_algorithm::decrypt(std::string& data)
{

}

void steganography_algorithm::set_key(std::string& key)
{
    key_ = key;
}

}