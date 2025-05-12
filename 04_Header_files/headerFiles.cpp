// There are mainly two types of header files.

// 1. system header files: predefined.
#include <iostream>
#include <string>

// 2. user-defined header files: written by programmer.
#include "utilities.h"

int main()
{

    std::string userName;

    std::cout << "Enter your name: ";
    std::getline(std::cin, userName);

    // from the utilities.h
    printSeparator();
    greetUser(userName);
    printSeparator();

    return 0;
}



// our main file knows the function exists from the .h file
// but it can't find the actual code from utilities.cpp while compiling.
// we need to compile both files together like this:

// Compilation: g++ headerFiles.cpp utilities.cpp -o header_demo
// Run: ./header_demo  (Linux/Mac/Git Bash) OR header_demo.exe (Windows)