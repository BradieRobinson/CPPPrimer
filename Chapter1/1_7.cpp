
// Compile a program that has incorrectly nested comments.

#include <iostream>

int main()
{
    // Sample fromt he book: 
    
    /* comment pairs /* */ cannot nest. * ''cannot nest'' is considered source code,
    * as is the rest of the program
    */

    return 0;
}