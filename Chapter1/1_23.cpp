
//Write a program that reads several transactions and counts how many transactions occur for each ISBN .

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item firstItem;
    if(std::cin >> firstItem)
    {
        int counter = 1; // 1 started for the orginal input
        Sales_item compare;
        while(std::cin >> compare)
        {
            if(firstItem.isbn() == compare.isbn())
            {
                counter++;
                std::cout << "There are " << counter << " instances of " << firstItem.isbn() << std::endl;
            }
        }
    }

    return 0;
}