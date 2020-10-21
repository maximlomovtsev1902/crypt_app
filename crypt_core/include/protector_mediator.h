#pragma once

#include "mediator.h"
#include "protector.h"

namespace crypt_core
{

/// @brief Mediator for access to protector object
class protector_mediator : public mediator
{
public:
    /// @brief Constructor
    /// @param[in] _protector - Protector object
    protector_mediator(crypt_core::protector& _protector);

    /// @see mediator 
    virtual bool execute(std::string& command, std::string& command_data);

private:
    /// Protector object
    crypt_core::protector& protector_;
};

} // crypt_core