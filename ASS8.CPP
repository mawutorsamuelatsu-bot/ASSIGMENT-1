#include <iostream>

int main()
{
    // Declaration
    int number;

    // Input
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Process and Output
    if (number % 2 != 0)
    {
        std::cout << "Odd number" << std::endl;
    }
    else
    {
        std::cout << "Even number" << std::endl;
    }

    return 0;
}