#include <iostream>
#include <cctype>

int main()
{
    // Declaration
    char letter;

    // Input
    std::cout << "Enter a character: ";
    std::cin >> letter;

    // Process and Output
    if ((letter >= 'A' && letter <= 'Z') && isupper(letter))
    {
        std::cout << "Uppercase letter" << std::endl;
    }
    else
    {
        std::cout << "Not an uppercase letter" << std::endl;
    }

    return 0;
}