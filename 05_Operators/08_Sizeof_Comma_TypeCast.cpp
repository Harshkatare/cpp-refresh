#include <iostream>
using namespace std;

int main()
{

    int x = 50;
    double y = 52.20;

    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;

    cout << "---- Operators in C++ ----" << endl
         << endl;

    // SizeOf Operator
    cout << "SizeOf Operator: " << endl;

    cout << "The size of int: " << sizeof(int) << " bytes" << endl;
    cout << "The size of double: " << sizeof(double) << " bytes" << endl;
    cout << "The size of  variable x (int): " << sizeof(x) << " bytes" << endl;
    cout << "The size of  variable y (int): " << sizeof(y) << " bytes" << endl
         << endl;

    // Comma Operator
    cout << "Comma Operator: " << endl;

    int a, b;
    int result = (a = 5, b = 10, a + b);
    cout << "Result of comma operator (a + b): " << result << endl
         << endl;

    // Typecasting Operator
    cout << "Typecasting Operator: " << endl;

    double z = 8.72481;

    // C-style cast: (int)z
    // Simple but unsafe typecast, no type safety.
    int castedValue = (int)z; // Converts double to int by truncating the decimal
    cout << "The value of z as a double: " << z << endl;
    cout << "The value of z as an int (after casting using C-style cast): " << castedValue << endl;

    // C++ style cast: static_cast<int>(z)
    // Safer and more explicit, enforces type safety.
    int castedValue2 = static_cast<int>(z); // Same conversion as C-style cast, but safer
    cout << "The value of z as an int (using static_cast): " << castedValue2 << endl;

    // C-style cast using int(z)
    // Similar to (int)z but looks like a function call. Less explicit.
    int castedValue3 = int(z); // Another form of C-style cast
    cout << "The value of z as an int (using int(z)): " << castedValue3 << endl;

    return 0;
}
