#include <iostream>
using namespace std;

int main()
{
    cout << "---- Operators in C++ ----" << endl
         << endl;

    // 1. Assignment Operators

    cout << "Assignment Operators:" << endl;
    int x = 10;
    cout << "x = 10: " << x << endl;
    x += 5;
    cout << "x += 5: " << x << endl;
    x *= 2;
    cout << "x *= 2: " << x << endl << endl;

    return 0;
}