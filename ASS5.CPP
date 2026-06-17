#include <iostream>

int main()
{
    // Declaration
    int num1, num2;

    // Input
    std::cout << "Enter first integer: ";
    std::cin >> num1;

    std::cout << "Enter second integer: ";
    std::cin >> num2;

    // Process and Output
    if (num1 > num2)
    {
        std::cout << "First value is greater" << std::endl;
    }
    else
    {
        std::cout << "Second value is greater" << std::endl;
    }

    return 0;
}