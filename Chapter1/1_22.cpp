//Write a program that reads several transactions for the same
// ISBN . Write the sum of all the transactions that were read.

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;

    if(std::cin >> total)
    {
        Sales_item compare;
        while (std::cin >> compare)
        {
            if(total.isbn() == compare.isbn())
            {
                total += compare;
                std::cout << "Same input, new total is: " << total << std::endl;
            }
            else 
            {
                std::cout << "Different input " << compare << " has been ignored." << std::endl;
            }
        }
    }   


 
    return 0;
}