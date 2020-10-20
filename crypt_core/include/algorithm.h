#include <string>

namespace crypt_core
{

class algorithm
{
    virtual void execute() = 0;

    virtual void set_key(std::string& key) = 0;

    virtual std::string& get_data() = 0;
};

}