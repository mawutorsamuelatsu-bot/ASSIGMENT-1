#include <iostream>
#include <cmath>

int main()
{
    // Declaration
    double radius, area;
    const double PI = 3.142;

    // Input
    std::cout << "Enter radius: ";
    std::cin >> radius;

    // Process
    area = PI * pow(radius, 2);

    // Output
    std::cout << "Area of the circle = " << area << std::endl;

    return 0;
}