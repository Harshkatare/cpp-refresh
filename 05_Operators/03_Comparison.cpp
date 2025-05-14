#include <iostream>
using namespace std;

int main()
{

    int x = 50, y = 20;

    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;

    cout << "---- Operators in C++ ----" << endl
         << endl;

    // 1. Comparison Operators
    cout << "Comparison Operators: " << endl;

    cout << "x == y: " << (x == y) << endl;
    cout << "x != y: " << (x != y) << endl;
    cout << "x > y: " << (x > y) << endl;
    cout << "x < y: " << (x < y) << endl;
    cout << "x >= y: " << (x >= y) << endl;
    cout << "x <= y: " << (x <= y) << endl
         << endl;

    // By default, C++ prints boolean values as '1' (true) or '0' (false).
    // The "boolalpha" manipulator changes this format to print 'true' and 'false' instead.

    cout << "Comparison Operators with boolalpha: " << endl;
    cout << boolalpha;
    cout << "x == y: " << (x == y) << endl;
    cout << "x != y: " << (x != y) << endl;
    cout << "x > y: " << (x > y) << endl;
    cout << "x < y: " << (x < y) << endl;
    cout << "x >= y: " << (x >= y) << endl;
    cout << "x <= y: " << (x <= y) << endl;

    return 0;
}