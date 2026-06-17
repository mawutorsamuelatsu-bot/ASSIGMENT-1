#include <iostream>

int main()
{
    // Declaration
    int num1, num2, num3;

    // Input
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;

    // Process and Output
    if (num1 == num2 && num2 == num3)
    {
        std::cout << "Equal" << std::endl;
    }
    else
    {
        std::cout << "Not equal" << std::endl;
    }

    return 0;
}