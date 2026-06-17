// Name: Samuel Ananigo
// Course: Computational Tools
// Assignment 1

#include <iostream>

int main()
{
    // Declaration
    int binary, decimal = 0, remainder, base = 1;
    int choice;

    // Input
    std::cout << "===== Binary Conversion Calculator =====" << std::endl;
    std::cout << "1. Binary to Decimal" << std::endl;
    std::cout << "2. Binary to Hexadecimal" << std::endl;
    std::cout << "3. Binary to Octal" << std::endl;

    std::cout << "\nEnter your choice: ";
    std::cin >> choice;

    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    // Process: Convert Binary to Decimal First
    int temp = binary;

    while (temp > 0)
    {
        remainder = temp % 10;
        decimal += remainder * base;
        base *= 2;
        temp /= 10;
    }

    // Output
    switch(choice)
    {
        case 1:
            std::cout << "Decimal = " << decimal << std::endl;
            break;

        case 2:
            std::cout << "Hexadecimal = "
                      << std::hex << decimal << std::endl;
            break;

        case 3:
            std::cout << "Octal = "
                      << std::oct << decimal << std::endl;
            break;

        default:
            std::cout << "Invalid Choice!" << std::endl;
    }

    return 0;
}