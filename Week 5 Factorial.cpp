//Factorial of a number 
// 5! = 1 x 2 x 3 x 4 x 5 --> 120
#include<iostream>
using namespace std; 
int main() 
{
    int num, fact = 1 ; 
    cout << "Please enter the number for the factorial "; 
    cin >> num; 
    /*for (int i = 1; i <=num; i++)//incrementing for loop 
    {
}*/
for (int i = num; i > 1; i --)
{
    fact *= i;// fact = fact * i; 
}
cout << "The factorial of  " << num << " is " << fact << end1; 
return 0; 

