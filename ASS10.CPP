#include <iostream>

int main()
{
    // Declaration
    int number;

    // Input
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Process and Output
    if ((number % 2 != 0) && (number % 3 == 0))
    {
        std::cout << "The number is odd and divisible by 3." << std::endl;
    }
    else
    {
        std::cout << "The number does not satisfy the condition." << std::endl;
    }

    return 0;
}