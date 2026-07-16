#include <cstdint>
#include <iostream>

int main(){
    bool b1 = true;
    bool b2 = false;

    bool c1 = ( b1 || b2) && b1;

    if (b1 == true && c1 == true){
        std::cout << "b1 is true and c1 is true\n";
    }
    else if (!b2) {
        std::cout << "b2 is false\n";
    }

    // Ternary operator
    std::int32_t result = b1 ? 1 : 0;

    std::cout << "Result of ternary operation: " << result << std::endl;


    return 0;

}