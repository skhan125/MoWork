#include <iostream>
#include <string>

using namespace std;

int calculateASCIISum(const string& inputString) {
    int sum = 0;
    for (char ch : inputString) {
        sum += static_cast<int>(ch); // Add the ASCII value of the character
    }
    return sum;
}

int main() {
    string testString;
    int numTests = 5;

    for (int i = 1; i <= numTests; ++i) {
        cout << "Enter string #" << i << ": ";
        getline(cin, testString);

        int asciiSum = calculateASCIISum(testString);
        cout << "The sum of the ASCII values of the characters is: " << asciiSum << endl;
    }

    return 0;
}
