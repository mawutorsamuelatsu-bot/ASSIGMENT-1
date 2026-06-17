#include <iostream>

int main()
{
    // Declaration
    int num1, num2;
    int sum, difference, product;
    double quotient;

    // Input
    std::cout << "Enter first integer: ";
    std::cin >> num1;

    std::cout << "Enter second integer: ";
    std::cin >> num2;

    // Process
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = static_cast<double>(num1) / num2;

    // Output
    std::cout << "\nSum = " << sum << std::endl;
    std::cout << "Difference = " << difference << std::endl;
    std::cout << "Product = " << product << std::endl;
    std::cout << "Quotient = " << quotient << std::endl;

    return 0;
}