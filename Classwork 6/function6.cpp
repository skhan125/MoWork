//PASS BY REFERENCE
#include <iostream>
using namespace std;
/* This is a void function with two integer parameter. The parameters are passed by
reference so they go in with one value and possibly come back with a different value.
Two numbers will go in, and when the function is called the first parameter will comeback
with the sum of the two numbers and the second parameter will come back with the 
difference of the two number*/

void Calc(int&, int&);//int& means address of an int--?reference

int main()
{	int Num1, Num2;
	cout << "Please enter the first number: ";
	cin >> Num1;
	cout << "Please enter the second number: ";
	cin >> Num2;
	cout << Num1 << "\t" << Num2 << endl;//Before call

	Calc(Num1, Num2); //see: NO & (5,6) (Num1+2,Num2+2_

	cout << "Here is the sum of the Numbers in Num1: " << Num1 << endl;
	cout << "Here is the diff of the Numbers in Num2: " << Num2 << endl;
	return 0;
}

void Calc(int& N1, int& N2)//we must have int& along with the FORMAL parameter name
{
	int sum, diff;//temporary local variables
	sum = N1 + N2;
	diff = N1 - N2;
	N1 = sum;//reference parameters changed inside the function
	N2 = diff;
}