#include <iostream>
#include <Windows.h>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	double V;
	double t;
	double a;
	double S;

	std::cout << "Enter speed (V): ";
	std::cin >> V;

	std::cout << "Enter time (t): ";
	std::cin >> t;

	std::cout << "Enter acceleration (a): ";
	std::cin >> a;

	S = V * t + (a * t * t) / 2;

	std::cout << "Distance walked (S) = " << S << std::endl;

	return 0;
}