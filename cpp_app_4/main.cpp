#include <iostream>

int main()
{
	std::cout << "Calculation of distance between settlements" << std::endl;
	std::cout << "Enter output: " << std::endl;

	double mapScale, distanceInCm;

	std::cout << "Enter the scale of the map (the number of kilometers in one centimeter) -> ";
	std::cin >> mapScale;

	std::cout << "Enter the distance between points representing settlements (cm) -> ";
	std::cin >> distanceInCm;

	double distanceInKm = distanceInCm / (100000 * mapScale); 

	std::cout << "Distance between settlements " << distanceInKm << "km" << std::endl;


	return 0;
}