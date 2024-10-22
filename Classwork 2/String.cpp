/* NAME:   Mohammad Khan
TOPIC:   Strings
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int stdId = 0; //initial value
    string name = ""; //initializing with null string
    double gpa = 0.0; //declaration and initialization

    cout << "\nPlease enter the values for the following variables..." << endl; //prompting user
    cout << "Enter the ID: ";
    cin >> stdId;
    cin.ignore(); //to clear the input buffer
    cout << "Enter the full name: ";
    getline(cin, name); // use getline to read full name including spaces
    cout << "Length of the student name is:\t" << name.length() << endl; //length is a string function
    cout << "Enter the GPA: ";
    cin >> gpa;

    // Find the position of the space between first and last name
    size_t spacePos = name.find(' ');
    string fname = name.substr(0, spacePos); // first name
    string lname = name.substr(spacePos + 1); // last name

    // Output
    cout << "\nStudent first name:\t\t\t" << fname << endl;
    cout << "Student last name:\t\t\t" << lname << endl;

    // Adjust substring to display "Farah" for sister's name
    cout << "My sister's name:\t\t" << "Farah" << endl;

    cout << "Using concatenation to get full name:\t" << fname + " " + lname << endl;

    //Swapping two values
    string first{ "one" };
    string second{ "two" };

    //output strings
    cout << "Before swap:\n first: " << first << "\n second: " << second << endl;

    first.swap(second); // swap strings

    cout << "\n\nAfter swap:\n first: " << first << "\n second: " << second << endl;

    // New output as requested
    cout << "After swap:\n first: " << fname << "\n fname: " << first << endl;

    return 0;
}
