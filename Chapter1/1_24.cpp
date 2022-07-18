
/*
Test the previous program by giving multiple transactions
representing multiple ISBN s. The records for each ISBN should be grouped
together.
*/

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
            else
            {
                // Added from 1_23 for updating of firstItem
                firstItem = compare;
            }
        }
    }

    return 0;
}