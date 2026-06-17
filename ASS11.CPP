#include <iostream>

int main()
{
    // Declaration
    int a, b;

    // Input
    std::cout << "Enter value of a: ";
    std::cin >> a;

    std::cout << "Enter value of b: ";
    std::cin >> b;

    // Process
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // Output
    std::cout << "After swapping:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}