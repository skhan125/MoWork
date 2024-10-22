#include <iostream>

using namespace std;

void menu() {
    cout << "Fraction Calculator\n";
    cout << "Select an operation: \n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void addFractions(int n1, int d1, int n2, int d2, int& nr, int& dr) {
    nr = n1 * d2 + n2 * d1;
    dr = d1 * d2;
}

void subtractFractions(int n1, int d1, int n2, int d2, int& nr, int& dr) {
    nr = n1 * d2 - n2 * d1;
    dr = d1 * d2;
}

void multiplyFractions(int n1, int d1, int n2, int d2, int& nr, int& dr) {
    nr = n1 * n2;
    dr = d1 * d2;
}

void divideFractions(int n1, int d1, int n2, int d2, int& nr, int& dr) {
    nr = n1 * d2;
    dr = d1 * n2;
}

void simplifyFraction(int& n, int& d) {
    int common = gcd(n, d);
    n /= common;
    d /= common;
}

int main() {
    int n1, d1, n2, d2, nr, dr;
    int choice;

    menu();
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the numerator and denominator of the first fraction (a/b): ";
    cin >> n1 >> d1;

    cout << "Enter the numerator and denominator of the second fraction (a/b): ";
    cin >> n2 >> d2;

    switch (choice) {
    case 1:
        addFractions(n1, d1, n2, d2, nr, dr);
        break;
    case 2:
        subtractFractions(n1, d1, n2, d2, nr, dr);
        break;
    case 3:
        multiplyFractions(n1, d1, n2, d2, nr, dr);
        break;
    case 4:
        divideFractions(n1, d1, n2, d2, nr, dr);
        break;
    default:
        cout << "Invalid choice.\n";
        return 1;
    }

    simplifyFraction(nr, dr);
    cout << "Result: " << nr << "/" << dr << endl;

    return 0;
}
