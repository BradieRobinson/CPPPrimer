//Write a program that reads two Sales_item objects that 
//have the same ISBN and produces their sum

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;

    std::cin >> item1 >> item2;

    if(item1.isbn() == item2.isbn())
    {
        
        std::cout << "Same" << std::endl;
    }
    else 
    {
        std::cout << "Not the same" << std::endl;
    }

    return 0;
}