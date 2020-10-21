#include "protector_mediator.h"
#include "protector_impl.h"

#include <memory>
#include <iostream>

int main(int argc, char** argv)
{
    if(argc <= 1)
    {
        std::cerr << "invalid arguments count" << std::endl;
        return -1;
    }

    std::unique_ptr<crypt_core::protector> protector_obj = std::make_unique<crypt_core::protector>(new crypt_core::protector_impl());

    std::unique_ptr<crypt_core::mediator> mediator_obj = std::make_unique<crypt_core::mediator>(new crypt_core::protector_mediator(*protector_obj));

    std::string command = argv[1];
    std::string command_data = argv[2];

    if(!mediator_obj->execute(command, command_data))
    {
        std::cerr << "unknown command" << std::endl;
        return -1;
    }

    std::cout << "success" << std::endl;

    return 0;
}