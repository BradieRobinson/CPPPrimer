
// Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.

#include <iostream>

int main()
{
    int v1 = 0, v2 = 0, high = 0, low = 0;

    std::cout << "Please enter 2 numbers: ";
    std::cin >> v1 >> v2;

    if(v1 < v2)
    {
        low = v1;
        high = v2;
    }
    else
    {
        low = v2;
        high = v1;
    }

    while(high >= low)
    {
        std::cout << high << std::endl;
        --high;
    }

    return 0;
}