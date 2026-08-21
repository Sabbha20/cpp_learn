#include <iostream>
#include <string>

int main(){
    int a = 7;
    int b = 2;

    int c = a/b;
    double d = a/double(b);

    std::cout << "C = " << c << std::endl;
    std::cout << "D = " << d << std::endl;

    return 0;
}