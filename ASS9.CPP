#include <iostream>

int main()
{
    // Declaration
    int num1, num2, larger;

    // Input
    std::cout << "Enter first integer: ";
    std::cin >> num1;

    std::cout << "Enter second integer: ";
    std::cin >> num2;

    // Process
    larger = (num1 > num2) ? num1 : num2;

    // Output
    std::cout << "The larger number is: " << larger << std::endl;

    return 0;
}