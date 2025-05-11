#include <iostream>
#include <iomanip>
#include <string>

// using namespace std;
// In larger projects, it's better to use std:: explicitly or import only needed elements.

int main()
{

    int a, b;
    std::cout << "Enter an integer value for a: ";
    std::cin >> a;

    std::cout << "Enter an integer value for b: ";
    std::cin >> b;

    float rate;
    std::cout << "Enter a float value (e.g., interest rate): ";
    std::cin >> rate;

    char grade;
    std::cout << "Enter your grade (A/B/C/etc.): ";
    std::cin >> grade;

    std::string name;
    std::cout << "Enter your name: ";
    std::cin.ignore();
    std::getline(std::cin, name);

    // std::cin >> name; -> This only takes input until a space is encountered; any text after the space is ignored.

    std::cout << "\n--- Output ---\n";
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You entered integers: a = " << a << ", b = " << b << std::endl;
    std::cout << "Sum = " << a + b << std::endl;
    std::cout << "Product = " << a * b << std::endl;

    std::cout << "Interest rate (float): " << std::fixed << std::setprecision(2) << rate << "%" << std::endl;
    std::cout << "Grade (char): " << grade << std::endl;

    return 0;
}