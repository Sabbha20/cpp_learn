#include <iostream>
#include "physics.h"
#include "mathutils.h"

int main(){

    std::cout << physics::calculateForce(10) << std::endl;

    std::cout << mathutils::add(3, 4) << std::endl;
    std::cout << mathutils::subtract(3, 4) << std::endl;
    return 0;
}