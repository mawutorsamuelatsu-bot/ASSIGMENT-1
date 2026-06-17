#include <iostream>
#include <string>

int main()
{
    // Declaration
    std::string text;

    // Input
    std::cout << "Enter a string: ";
    std::cin >> text;

    // Process and Output
    if (text.find('a') != std::string::npos)
    {
        std::cout << "Contains 'a'" << std::endl;
    }
    else
    {
        std::cout << "Does not contain 'a'" << std::endl;
    }

    return 0;
}