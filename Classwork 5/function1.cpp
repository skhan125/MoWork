//no communication just action. Function will do something
//Code written to perform a single task in a specific format is called a FUNCTION
#include <iostream>
using namespace std;

// This is a void function with no parameters. This function does something inside
// the function body
void Header(); // Function prototype/signature

// Flow of execution
int main() // Entry into the program
{
    Header(); // Void function can be called on a line by itself. CALL/invocation
    return 0;
}

// Function Definition
void Header()//function header MUST MATCH the prototype
{// Function body
    cout << "\nFunction that does something\n" << endl;
}

