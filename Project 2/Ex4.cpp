#include <iostream>
#include <cstdlib> // for rand and srand
#include <ctime>   // for time

using namespace std;

int generateRandomNumber() {
    return rand() % 90 + 10; // Generate a two-digit number
}

int reverseDigits(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int sumDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

void menu(int& num) {
    int choice;
    cout << "Choose an operation: \n";
    cout << "1. Double the number\n";
    cout << "2. Reverse the digits\n";
    cout << "3. Raise to power (2, 3, 4)\n";
    cout << "4. Sum the digits\n";
    cout << "5. Raise first digit to power of second\n";
    cin >> choice;

    if (choice == 1) {
        num *= 2;
    }
    else if (choice == 2) {
        num = reverseDigits(num);
    }
    else if (choice == 3) {
        int power;
        cout << "Enter power (2, 3, 4): ";
        cin >> power;
        num = static_cast<int>(pow(num, power));
    }
    else if (choice == 4) {
        cout << "Sum of digits: " << sumDigits(num) << endl;
    }
    else if (choice == 5) {
        int firstDigit = num / 10;
        int secondDigit = num % 10;
        num = static_cast<int>(pow(firstDigit, secondDigit));
    }

    if (num < 10) {
        num += 10;
    }

    cout << "Updated number: " << num << endl;
    cout << "Is prime: " << (isPrime(num) ? "Yes" : "No") << endl;
}

int main() {
    srand(time(0));

    int num = generateRandomNumber();
    cout << "Generated number: " << num << endl;

    char repeat;
    do {
        menu(num);
        cout << "Do you want to perform another operation? (y/n): ";
        cin >> repeat;
    } while (tolower(repeat) == 'y');

    return 0;
}
