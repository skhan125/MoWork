//Factorial of a number
#include<iostream>
using namespace std;
int main()
{
    int num, fact;
    char ur;//user responce
    cout << "Would you like to check the factorial of a number? (Y/N):";
    cin >> ur;
    while ((ur == 'Y') || (ur == 'y'))//pre-test
    {
        fact = 1; //re-initializing
        cout << "\nPlease enter the number for the factorial ";
        cin >> num;
        int i = 1;
        while (i <= num)
        {
            fact = fact * i;
            i++;
        }
        cout << "The factorial of " << num << " is " << fact << endl;
        cout << "\nWould you like to check the factorial of another number? (Y/N):";
        cin >> ur;
    }
    return 0;
}