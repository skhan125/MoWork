//Mohammad Khan
#include <iostream>
using namespace std;

int main()
{
    int score; // declare an integer variable
    cout << "Please enter a value for score: "; // Prompt the user 
    cin >> score; // get input from keyboard 
    cout << "Here is the value you entered for score: " << score << endl; // echoing 

    // simple if statement #1 
    // Testing for perfect score ==> PROBLEM 0 to 100
    /* Keyword if followed by condition(TEST) of equality followed by the block of code to be executed when the test returns true.
       Always put the test in parentheses. Equality operator is ==. DO NOT CONFUSE WITH = (assignment operator)*/
    if (score == 100) // Checking for a perfect score
    { // single pathway we take if condition is true 
        cout << "Score is perfect!!!" << endl;
        cout << "Bravo!!" << endl;
        cout << "Great!!" << endl;
    } // curly braces are needed when the if statement has more than one line of code in the block

    // if then else statements have 2 pathways, one for true and one for false #2
    // Check to see if the score entered is EVEN or ODD --> PROBLEM 
    if ((score % 2) == 0) // % is the modulus operator that returns the remainder 
    { // gives the remainder to be compared to 0 
        cout << "\nScore is even!\n\n"; // TRUE Body 
    }
    else
    { // what follows else is the false body 
        cout << "\nScore is odd!\n\n"; // Indicates score is odd
    }

    // if then else if statement, multiple pathways #3
    // Print the letter grade for the given score --> PROBLEM 
    if (score >= 90) // Condition for A grade
        cout << "Letter Grade is A" << endl;
    else if (score >= 80) // Condition for B grade
        cout << "Letter Grade is B" << endl;
    else if (score >= 70) // Condition for C grade
        cout << "Letter Grade is C" << endl;
    else if (score >= 60) // Condition for D grade
        cout << "Letter Grade is D" << endl;
    else // This is called default else 
        cout << "Letter Grade is F" << endl; // Indicates failing grade

    return 0;
}