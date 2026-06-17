#include <iostream>
#include <string>

int main()
{
    // Declaration
    std::string word;

    // Input
    std::cout << "Enter a word: ";
    std::cin >> word;

    // Process and Output
    if (word == "hello")
    {
        std::cout << "Hello!" << std::endl;
    }
    else
    {
        std::cout << "Goodbye!" << std::endl;
    }

    return 0;
}