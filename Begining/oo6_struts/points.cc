#include <iostream>
#include <string>
#include <cmath>

struct Point{
    double x;
    double y;
};

Point makeOrigin(){
    Point p = {0.0, 0.0};
    return p;
}

double distance(Point a, Point b){
    return std::sqrt(std::pow(b.x - a.x, 2) + std::pow(b.y - a.y, 2));
}

int main(){
    Point p1;
    p1.x = 10.0;
    p1.y = 20.0;

    Point p2 = {5.0, 10.0};

    Point origin = makeOrigin();

    std::cout << "Point 1: (" << p1.x << ", " << p1.y << ")" << std::endl;
    std::cout << "Point 2: (" << p2.x << ", " << p2.y << ")" << std::endl;
    std::cout << "Origin: (" << origin.x << ", " << origin.y << ")" << std::endl;

    std::cout << "Distance between origin and Point 1: " << distance(origin, p1) << std::endl;


    return 0;
}