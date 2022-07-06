
/*
Explain whether the following program fragment is legal:

std::cout << "The sum of " << v1; << " and " << v2;
<< " is " << v1 + v2 << std::endl;

It is not legal, as after a semicolon you are required to re-wite std::cout
To fix the code I would remove the semicolons: 
*/

#include <iostream> 

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}