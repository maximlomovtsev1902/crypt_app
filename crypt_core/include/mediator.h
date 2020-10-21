#pragma once

#include <string>

namespace crypt_core
{

/// @brief Interface for mediator object
struct mediator
{
    /// @brief Execute command
    /// @param[in] command - Command
    /// @param[in] command_data - Command data
    /// @return true, if success
    virtual bool execute(std::string& command, std::string& command_data) = 0;
};

} // crypt_core