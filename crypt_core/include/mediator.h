#pragma once

#include <string>

namespace crypt_core
{

/// @brief Interface for mediator object
struct mediator
{
    /// @brief Execute command
    /// @param[in] command_id - Command ID
    /// @param[in] command_data - Command data
    /// @return true, if success
    virtual bool execute(int command_id, std::string& command_data) = 0;
};

} // crypt_core