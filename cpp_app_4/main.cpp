#include <iostream>

int main()
{
    int hrn, kop;

    std::cout << "Enter the amount of hryvnia: ";
    std::cin >> hrn;

    std::cout << "Enter the amount of kop: ";
    std::cin >> kop;

    hrn += kop / 100;
    kop = kop % 100;

    std::cout  << hrn << " hrn " << kop << " kop " << std::endl;


	return 0;
}