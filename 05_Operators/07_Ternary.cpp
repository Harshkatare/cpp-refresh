#include <iostream>
using namespace std;

int main(){

    int x = 50, y = 20;

    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;

    cout << "---- Operators in C++ ----" << endl
         << endl;

    // Conditional (Ternary) Operator
    cout << "Conditional (Ternary) Operator: " << endl;
    // This operator is a shorthand for an if-else statement.

    int result = (x > y) ? x : y; // If x is greater than y, result is x, else it is y
    cout << "The greater value is: " << result << endl;

    return 0;
}

