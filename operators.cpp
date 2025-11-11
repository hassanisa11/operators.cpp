// a program to test various operators in C++
#include <iostream>
using namespace std;

int main()
{
    // variable declarations
    int num1 = 16, num2 = 4;
    // arithmetic operators
    cout << "ADDITION: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl; // ADDITION:5+3=8
    cout << "SUBTRACTION: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << "MULTIPLICATION: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    cout << "DIVISION: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << "MODULUS: " << num1 << " % " << num2 << " = " << (num1 % num2) << endl;
    cout << "INCREMENT: " << "++" << num1 << " = " << (++num1) << endl; // pre-increment
    cout << "INCREMENT: " << num1++ << " = " << num1 << endl;           // post-increment
    cout << "DECREMENT: --" << num2 << " = " << (--num2) << endl;       // pre-decrement
    cout << "DECREMENT: " << num2-- << " = " << num2 << endl;           // post-decrement
    cout << "COMBINED INCREMENT AND ASSIGNMENT: num1 += 2; " << (num1 += 2) << endl;
    cout << "COMBINED DECREMENT AND ASSIGNMENT: num1 -= 2; " << (num1 -= 2) << endl;
    cout << "COMBINED MULIPLY AND ASSIGN: num1 *= 2; " << (num1 *= 2) << endl;
    cout << "COMBINED DIVIDE AND ASSIGN: num1 /= 2; " << (num1 /= 2) << endl;

    // COMPARISON/LOGICAL OPERATORS
    // BOOLEAN VAULES
    bool val1 = true;
    bool val2 = false;
    cout << "AND OPERATOR: " << (val1 && val2) << endl; // AND OPERATOR: 0

    cout << "OR OPERATOR: " << (val1 || val2) << endl;  // OR OPERATOR: 1
    cout << "NOT OPERATOR: " << (!val1) << endl;        // NOT OPERATOR: 0
    cout << "EQUAL TO: " << (num1 == num2) << endl;     // EQUAL TO: 0
    cout << "NOT EQUAL TO: " << (num1 != num2) << endl; // NOT EQUAL TO: 1
    return 0;
}
