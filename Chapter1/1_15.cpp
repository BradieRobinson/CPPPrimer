
//Write programs that contain the common errors discussed in the box on page 16. 
// Familiarize yourself with the messages the compiler generates.

#include <iostream>

int main()
{
    // Missing semicolon
    int v1 = 0;
    std::cout << v1 << std::endl

    // Did not declare v2
    std::cout << v2 << std::endl;

    // Type error
    v1 = "Test"

    return 0;
}