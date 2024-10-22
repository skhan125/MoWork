// PASS BY VALUE
#include <iostream>
using namespace std;
/* This is a value function with two parameters. The function returns an integer
value which is the product of the two numbers passed*/

int Product(int, int); // Correct capitalization for the function name

int main()
{
    int Num1, Num2; // Local variables to main
    cout << "Please enter the first number: ";
    cin >> Num1; // Example input 5
    cout << "Please enter the second number: ";
    cin >> Num2; // Example input 6
    cout << Num1 << "\t" << Num2 << endl; // Before call
    // Output: 5   6

    /* In the following function call Num1 and Num2 are ACTUAL parameters passed as
    variables using the PASS BY VALUE method */
    cout << "The product is " << Product(Num1, Num2) << endl;

    cout << Num1 << "\t" << Num2 << endl; // After call
    // Output: 5   6 (unchanged because of pass by value)

    return 0;
}

// Function definition, ensure the case matches (Product)
int Product(int N1, int N2)
{
    N1 = N1 * 2; // 5 * 2
    N2 = N2 * 2; // 6 * 2
    return (N1 * N2); // 10 * 12
}
