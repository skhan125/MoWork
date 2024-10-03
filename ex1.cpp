#include <iostream>
#include <string>
using namespace std;

const int SECRET = 11;
const double RATE = 12.50;

int main() {
    // Variable declarations
    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;

    // Prompt the user to input two integers
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Output the values of num1 and num2
    cout << "num1 is " << num1 << " and num2 is " << num2 << endl;

    // Multiply num1 by 2, add num2, store the result in newNum, and output it
    newNum = (num1 * 2) + num2;
    cout << "The value of newNum is: " << newNum << endl;

    // Add SECRET to newNum and output it
    newNum += SECRET;
    cout << "The new value of newNum after adding SECRET is: " << newNum << endl;

    // Prompt the user to enter their last name
    cout << "Enter your last name: ";
    cin >> name;

    // Prompt the user to enter hours worked
    cout << "Enter hours worked (between 0 and 70): ";
    cin >> hoursWorked;

    // Multiply RATE with hoursWorked and store in wages
    wages = RATE * hoursWorked;

    // Output the name, hours worked, and wages
    cout << "Name: " << name << endl;
    cout << "Hours worked: " << hoursWorked << endl;
    cout << "Wages: $" << wages << endl;

    return 0;
}
