

//Indicate which, if any, of the following output statements are legal:

//std::cout << "/*";
//std::cout << "*/";
//std::cout << /* "*/" */;
//std::cout << /* "*/" /* "/*" */;


#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */"; // Added a "
    std::cout << /* "*/" /* "/*" */;
    return 0;

}