#include <iostream>
using namespace std;

int main()
{

    int x = 50, y = 20;

    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;

    cout << "---- Operators in C++ ----" << endl
         << endl;

    // 1. Arithmetic Operators
    cout << "Arithmetic Operators: " << endl;
    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;
    cout << "x % y = " << x % y << endl;

    cout << "Post-increment (x++): " << x++ << endl;
    cout << "Post-decrement (x--): " << x-- << endl;
    cout << "pre-increment (++x): " << ++x << endl;
    cout << "pre-decrement (--x): " << --x << endl;

    return 0;
}