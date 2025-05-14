#include <iostream>
using namespace std;

int main()
{

    int x = 50, y = 20;

    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;

    cout << "---- Operators in C++ ----" << endl
         << endl;

    // 5. Bitwise Operators
    cout << "Bitwise Operators: " << endl;

    cout << "Bitwise AND(&): \n";
    cout << "x & y = " << (x & y) << endl;

    cout << "Bitwise OR(|): \n";
    cout << "x | y = " << (x | y) << endl;

    cout << "Bitwise XOR(^): \n";
    cout << "x ^ y = " << (x ^ y) << endl;

    cout << "Bitwise NOT(~): \n";
    cout << "~x = " << (~x) << endl;

    cout << "Left Shift(<<): \n";
    cout << "x << 1 = " << (x << 1) << endl;

    cout << "Right Shift(>>): \n";
    cout << "x >> 1 = " << (x >> 1) << endl;


    return 0;
}

/*
Bitwise operators are used to manipulate the individual bits of integer data types.
These are typically used in low-level programming and when working with hardware-related tasks.
The common bitwise operators in C++ are:
&   -> Bitwise AND
|   -> Bitwise OR
^   -> Bitwise XOR
~   -> Bitwise NOT
<<  -> Left shift
>>  -> Right shift
*/