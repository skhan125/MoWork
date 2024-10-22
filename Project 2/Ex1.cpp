#include <iostream>
#include <string>
#include <cctype> // for toupper

using namespace std;

char letterToDigit(char letter) {
    letter = toupper(letter); // Convert letter to uppercase
    if (letter >= 'A' && letter <= 'C') return '2';
    if (letter >= 'D' && letter <= 'F') return '3';
    if (letter >= 'G' && letter <= 'I') return '4';
    if (letter >= 'J' && letter <= 'L') return '5';
    if (letter >= 'M' && letter <= 'O') return '6';
    if (letter >= 'P' && letter <= 'S') return '7';
    if (letter >= 'T' && letter <= 'V') return '8';
    if (letter >= 'W' && letter <= 'Z') return '9';
    return '0'; // Default, should never reach here with valid input
}

void convertPhoneNumber(const string& letters) {
    int count = 0; // To keep track of digits
    for (char letter : letters) {
        if (isalpha(letter)) {
            cout << letterToDigit(letter);
            count++;
        }
        if (count == 3) {
            cout << '-'; // Insert hyphen after the third digit
        }
        if (count == 7) break; // Only process the first 7 letters
    }
    cout << endl;
}

int main() {
    string phoneLetters;
    char choice;

    do {
        cout << "Enter a phone number in letters: ";
        getline(cin, phoneLetters);

        cout << "Corresponding phone number: ";
        convertPhoneNumber(phoneLetters);

        cout << "Do you want to convert another phone number? (y/n): ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character left in the input buffer
    } while (tolower(choice) == 'y');

    return 0;
}
