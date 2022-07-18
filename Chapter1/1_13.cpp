

#include <iostream>

int main()
{
    // Excerise 1.9
    std::cout << "Excerise 1.9" << std:: endl;
    
    int sum = 0;

    for(int i = 50; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << "The sum of 50 to 100 is: " << sum << std::endl;

    // Excerise 1.10
    std::cout << "Excerise 1.10" << std:: endl;

    for(int i = 10; i >=0; --i)
    {
        std::cout << i << std::endl;
    }

    // Excerise 1.11
    std::cout << "Excerise 1.11" << std:: endl;
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

    for(int i = high; i >= low; --i)
    {
        std::cout << i << std::endl;
    }

    return 0;
}