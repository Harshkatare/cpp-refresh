#include <iostream>
using namespace std;

// (Global variable)

int globalVar = 201;

int main()
{
    // (declared inside main => Local variables)

    // ---- BASIC DATA TYPES ----

    int a = 30;
    float pi = 3.14f;
    char c = 'H';
    bool isAvailable = true;
    double largeDecimal = 3.1415926535;
    short smallNumber = 32000;
    long bigNumber = 1000000;

    cout << "Integer (int): " << a << endl;
    cout << "Float: " << pi << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << isAvailable << endl;
    cout << "Double: " << largeDecimal << endl;
    cout << "Short: " << smallNumber << endl;
    cout << "Long: " << bigNumber << endl;

    // Accessing Global Variable
    cout << "Global variable: " << globalVar << endl;


    // Block scope
    {
        int blockScoped = 500;
        cout << "Inside block - blockScoped: " << blockScoped << endl;
    }

    // blockScoped is not accessible here

    // cout << blockScoped << endl;
        
    return 0;
}