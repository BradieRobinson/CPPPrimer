
// What does the following for loop do? What is the final value of sum?


// It looks between -100 to 100 (201 times), and adds 3 to sum every time.
// Sum is equal to 603

#include <iostream>

int main()
{
    int sum = 0;

    for(int i  = -100; i <= 100; ++i)
    {
        sum += 3;
    }

    std::cout << sum;

    return 0;
}