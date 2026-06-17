// Name: Samuel Ananigo
// Course: Computational Tools
// Assignment 1

#include <iostream>
#include <cmath>

int main()
{
    // Declaration
    long long binary;
    int decimal = 0, remainder, power = 0;

    // Input
    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    // Process
    while (binary > 0)
    {
        remainder = binary % 10;
        decimal += remainder * pow(2, power);

        binary /= 10;
        power++;
    }

    // Output
    std::cout << "Decimal equivalent = " << decimal << std::endl;

    return 0;
}