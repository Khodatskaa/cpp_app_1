#include <iostream>

int main() {
    double length, width, height;

    std::cout << "Calculation of pralelepiped volume" << std::endl;

    std::cout << "Enter the length of parallelepiped: ";
    std::cin >> length;

    std::cout << "Enter the width of parallelepiped: ";
    std::cin >> width;

    std::cout << "Enter the height of parallelepiped: ";
    std::cin >> height;

    double volume = length * width * height;

    std::cout << "Volume of parallelepiped: " << volume << " cubic cm" << std::endl;

    return 0;
}
