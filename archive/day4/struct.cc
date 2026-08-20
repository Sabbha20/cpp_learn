#include <iostream>

enum class Status
{
    Unkown,
    Connected,
    Disconnected,
};

struct User
{
    Status status;
    std::uint64_t id;
    std::string name;
};

int main(){
    User usr1 = {.status = Status::Connected, .id = 1U, .name = "Alice"};
    User usr2 = {Status::Unkown, 2U, "Bob"};

    std::cout << "User 1: " << usr1.name << ", Status: " << static_cast<int>(usr1.status) << ", ID: " << usr1.id << std::endl;
    std::cout << "User 2: " << usr2.name << ", Status: " << static_cast<int>(usr2.status) << ", ID: " << usr2.id << std::endl;
}
