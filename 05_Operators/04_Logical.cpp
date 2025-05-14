#include <iostream>
using namespace std;

int main()
{

    int x = 50, y = 20;

    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;

    cout << "---- Operators in C++ ----" << endl
         << endl;

    // 1. Logical Operators
    cout << "Logical Operators: " << endl;

    cout << "Logical AND:" << endl;
    cout << "(x == y) && (x < y): " << ((x == y) && (x < y)) << endl;

    cout << "Logical OR:" << endl;
    cout << "(x == y) || (x > y): " << ((x == y) || (x > y)) << endl;

    cout << "Logical NOT:" << endl;
    cout << "!(x == y): " << !(x == y) << endl;

    cout << "[All the basic operators are completed.]" << endl;

    return 0;
}