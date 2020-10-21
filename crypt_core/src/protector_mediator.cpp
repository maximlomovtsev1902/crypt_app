#include "protector_mediator.h"

namespace crypt_core
{

protector_mediator::protector_mediator(crypt_core::protector& _protector)
    : protector_(_protector)
{

}

bool protector_mediator::execute(std::string& command, std::string& command_data)
{
    if(command == "encrypt")
    {
        protector_.encrypt(command_data);
    }
    else if(command == "decrypt")
    {
        protector_.decrypt(command_data);
    }
    else if(command == "set_key")
    {
        protector_.set_key(command_data);
    }
    else
    {
        return false;
    }

    return true;
}

} // crypt_core