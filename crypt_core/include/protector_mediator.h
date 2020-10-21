#pragma once

#include "mediator.h"
#include "protector.h"

namespace crypt_core
{

/// @brief Mediator for access to protector object
class protector_mediator : public mediator
{
public:
    /// @brief Commands ID's
    enum protector_commands : int
    {
        encrypt,
        decrypt,
        set_key
    };

public:
    /// @brief Constructor
    /// @param[in] _protector - Protector object
    protector_mediator(crypt_core::protector& _protector);

    /// @see mediator 
    virtual bool execute(int command_id, std::string& command_data);

private:
    /// Protector object
    crypt_core::protector& protector_;
};

} // crypt_core