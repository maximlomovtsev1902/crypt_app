#include "protector_mediator.h"

namespace crypt_core
{

protector_mediator::protector_mediator(crypt_core::protector& _protector)
    : protector_(_protector)
{

}

bool protector_mediator::execute(int command_id, std::string& command_data)
{
    switch (command_id)
    {
        case protector_commands::encrypt:
            protector_.encrypt(command_data);
            break;
        case protector_commands::decrypt:
            protector_.decrypt(command_data);
            break;
        case protector_commands::set_key:
            protector_.set_key(command_data);
            break;
        default:
            return false;
    }
    return true;
}

} // crypt_core