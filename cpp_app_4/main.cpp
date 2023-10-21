#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;


int main() {
    double radius;

    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    double volume = (radius > 0) ? (4.0 / 3.0) * PI * std::pow(radius, 3) : 0;

    std::cout << "Volume of the sphere: " << volume << " cubic cm" << std::endl;

    return 0;
}