#include <iostream>

int main()
{
    int year;
    std::cout << "Enter the year: ";
    std::cin >> year;

    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    int days = 365 + (isLeapYear ? 1 : 0);

    std::cout << "In " << year << " year = " << days << " days" << std::endl;

	return 0;
}