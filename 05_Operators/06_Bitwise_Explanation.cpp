#include <iostream>
using namespace std;

int main()
{
    int x = 50, y = 20;

    // Display initial values
    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;

    cout << "---- Operators in C++ ----" << endl << endl;

    // 5. Bitwise Operators
    cout << "Bitwise Operators: " << endl;

    // Bitwise AND
    cout << "Bitwise AND (&): \n";
    cout << "x & y = " << (x & y) << endl;
    // Explanation for AND:
    // The AND operator compares corresponding bits of the numbers and returns 1 if both bits are 1, otherwise 0.
    // In binary: x = 50 (110010), y = 20 (10100)
    //         x & y = 110010 & 10100 = 010000 (16 in decimal)
    cout << "(In binary: 50 = 110010, 20 = 10100) -> Result = 000010 (16)" << endl << endl;

    // Bitwise OR
    cout << "Bitwise OR (|): \n";
    cout << "x | y = " << (x | y) << endl;
    // Explanation for OR:
    // The OR operator compares corresponding bits of the numbers and returns 1 if at least one of the bits is 1.
    // In binary: x = 50 (110010), y = 20 (10100)
    //         x | y = 110010 | 10100 = 110110 (54 in decimal)
    cout << "(In binary: 50 = 110010, 20 = 10100) -> Result = 110110 (54)" << endl << endl;

    // Bitwise XOR
    cout << "Bitwise XOR (^): \n";
    cout << "x ^ y = " << (x ^ y) << endl;
    // Explanation for XOR:
    // The XOR operator compares corresponding bits of the numbers and returns 1 if the bits are different, otherwise 0.
    // In binary: x = 50 (110010), y = 20 (10100)
    //         x ^ y = 110010 ^ 10100 = 100110 (38 in decimal)
    cout << "(In binary: 50 = 110010, 20 = 10100) -> Result = 100110 (38)" << endl << endl;

    // Bitwise NOT
    cout << "Bitwise NOT (~): \n";
    cout << "~x = " << (~x) << endl;
    // Explanation for NOT:
    // The NOT operator inverts all the bits of the number. All 1s become 0s, and all 0s become 1s.
    // For 50 (110010 in binary), NOT inverts the bits to get 11111111111111111111111111000011, which is -51 in decimal.
    cout << "(In binary: 50 = 110010) -> Result = 11111111111111111111111111000011 (-51)" << endl << endl;

    // Left Shift
    cout << "Left Shift (<<): \n";
    cout << "x << 1 = " << (x << 1) << endl;
    // Explanation for Left Shift:
    // The left shift operator shifts all bits to the left by the specified number of positions. It adds 0s on the right.
    // In binary: x = 50 (110010) << 1 = 1001000 (100 in decimal)
    cout << "(In binary: 50 = 110010) -> Result = 1001000 (100)" << endl << endl;

    // Right Shift
    cout << "Right Shift (>>): \n";
    cout << "x >> 1 = " << (x >> 1) << endl;
    // Explanation for Right Shift:
    // The right shift operator shifts all bits to the right by the specified number of positions. It drops the least significant bit.
    // In binary: x = 50 (110010) >> 1 = 011001 (25 in decimal)
    cout << "(In binary: 50 = 110010) -> Result = 011001 (25)" << endl << endl;

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
