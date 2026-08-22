#include <iostream>
#include <string>

int multiply(int x, int y){
    return x * y;
}

double multiply(double x, double y){
    return x * y;
}

void greet(std::string name = "firend"){
    std::cout << "Hello, " << name << std::endl;
}
int main(){

    std::cout << "multiply(3, 4): " << multiply(3, 4) << std::endl;
    std::cout << "multiply(3.65, 4.98): " << multiply(3.65, 4.98) << std::endl;

    greet();
    greet("Sabbha");

    return 0;
}