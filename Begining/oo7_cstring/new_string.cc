#include <iostream>
#include <string>
#include <cstring>

int main(){

    char cstr[] = "Hello";

    std::cout << "Length of " << cstr << " is:" << std::strlen(cstr) << std::endl;

    std::string str = "World";

    std::cout << "Length of " << str << " is:" << str.length() << std::endl;

    std::string result = std::string(cstr) + " " + str;

    std::cout << result;

    return 0;
}