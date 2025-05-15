#include <iostream>
using namespace std;

int main()
{

    cout << "---- Operators in C++ ----" << endl
         << endl;

    // Pointer & Address Operators
    cout << "Pointer & Address Operators: \n\n";
    cout << "Address-of Operator (&): " << endl;

    int x = 50;
    int *ptr = &x; // the address of 'x' is stored in 'ptr'

    cout << "The value of x is: " << x << endl;
    cout << "The address of x is: " << &x << endl;       // using & to get the address of x
    cout << "The address stored in ptr: " << ptr << endl // also the ptr holds the address of x
         << endl;

    cout << "Dereference Operator (*): \n";

    cout << "The value of x is: " << x << endl;
    cout << "The value at the address stored in ptr: " << *ptr << endl; // dereferencing to get the value of 'x'

    cout << endl;

    cout << "Pointer Modification: \n";

    *ptr = 25;
    cout << "The new value of 'x' after dereferencing and modifying through ptr: " << x << endl;

    return 0;
}