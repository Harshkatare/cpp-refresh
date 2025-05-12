// utilities.cpp
// This source file contains definitions for the functions declared in utilities.h.

#include <iostream>
#include "utilities.h"

void printSeparator()
{
    std::cout << "---------------------------------------------" << std::endl;
}

void greetUser(const std::string &name)
{
    std::cout << "Hello, " << name << "! welcome to the header files demo." << std::endl;
}