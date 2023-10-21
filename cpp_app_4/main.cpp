#include <iostream>
#include <Windows.h>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
	double L;
	double R;
	double S;

	std::cout << "Enter the length of the circle: ";
	std::cin >> L;

	R = L / (2 * M_PI);

	S = M_PI * pow(R, 2);

	std::cout << "Circle radius (R) = " << R << std::endl;
	std::cout << "Circle area (S) = " << S << std::endl;

	return 0;
}