#include <iostream>
using namespace std;

int main()
{
    int score; //declare an integer variable
    cout << "Please enter a value for score: "; //Prompt the user
    cin >> score; //get input from keyboard
    cout << "Here is the value you entered for score: " << score << endl;//echoing

    //simple if statement  #1
    //Testing for perfect score ==>PROBLEM 0 to 100
    /* Keyword if followed by condition(TEST) of equality followed by the block of code to be executed when the test returns true. Always put the test in parentheses equality operator is
    ==. DO NOT CONFUSE WITH = (assignment operator)*/
     if (score == 100) // Changed 'If' to 'if' (case sensitivity)
    { //single pathway we take if condition is true
        cout << "Score is perfect!!!" << endl;
        cout << "Bravo!!" << endl;
        cout << "Great!!" << endl;
    } //curly braces are needed when the if statement has more than one line of code in the block

    //if then else statements have 2 pathways, one for true and one for false #2
    //Check to see if the score entered is EVEN or ODD -->PROBLEM
    if ((score % 2) == 0) // % is the modulus operator that returns the remainder
    { //gives the remainder to be compared to 0
        cout << "\n Score is even!\n\n"; //TRUE Body
    }
    else
    {//what follows else is false body
        cout << "\n Score is odd!\n\n"; // Fixed missing quotation mark
    }

    //if then else if statement, multiple pathways #3
    //Print the letter grade for the given score -->PROBLEM
   /* if (score >= 90) // Changed to the correct condition for A grade
        cout << "Letter Grade is A" << endl;
    else if (score >= 80) // Changed to the correct condition
        cout << "Letter grade is B" << endl; // COMMENTED THIS OUT
    else if (score >= 70)
        cout << "Letter grade is C" << endl;
    else if (score >= 60)
        cout << "Letter grade is D" << endl;
    else // This is called default else
        cout << "Letter grade is F" << endl;

    //ALTERNATIVE LOGIC
    //Rewrite the above so that the choice of F grade is first.
  /*   if (score < 60) 
      //  cout << "Letter Grade is F" << endl;
    //else if (score < 70)
      //  cout << "Letter Grade is D" << endl;
    //else if (score < 80)
        cout << "Letter Grade is C" << endl;
    else if (score < 90)
        cout << "Letter Grade is B" << endl; // COMMENTED THIS OUT
    else
        cout << "Letter Grade is A" << endl; */

    //Coding for RANGE with logical operators USING NESTED IF ELSE STATEMENTS
    //Make sure the braces are matching
    // watch the braces to make sure if matches else (Dangling else problem)
  /*  if ((score >= 90) && (score <= 100)) // range test
        cout << "Your grade is A." << endl;
    else
    {
        if ((score >= 80) && (score < 90))
            cout << "Your grade is B." << endl; // COMMENTED THIS OUT
        else
        {
            if ((score >= 70) && (score < 80))
                cout << "Your grade is C." << endl;
            else
            {
                if ((score >= 60) && (score < 70))
                    cout << "Your grade is D." << endl;
                else
                    cout << "Your grade is F." << endl;
            }
        }
    }

    //#5
    //Using conditional operator ?: to find out if the score is odd/even
    //Short version if else --> works for single line bodies
    (score % 2 == 0) ? cout << "\n Score is even!\n" : cout << "\n Score is odd!\n"; // COMMENTED THIS OUT

    //system("pause");
    return 0;
    */
}
