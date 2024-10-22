//overloaded functions

#include <iostream>
using namespace std;
/* This is a void function with two integer parameters. The parameters are passed by
regerence so they go in with one value and posssible come back with a different value.
two number will go in and when the function is called the first parameter will comback
with the sum of the two numbers and the second parameter will comeback with the difference
of the two numbers*/

void Calc(int&, int&);//int& means address of an int

/*Over loaded functions are two or more functions with SAME name and DIFFERENT
parameters, meaning different prototype or signatures */
//This function will multiply the number with itself and return the product.

void Calc(int&);//This is an OVERLOADED function

int main()
{	int Num1, Num2;
	cout << "Please enter the first number: ";
	cin >> Num1;
	cout << "Please enter the second number: ";
	cin >> Num2;
	Calc(Num1, Num2);//See NO &
	cout << "Here is the sum of the Numbers in Num1: " << Num1 << endl;
	cout << "Here is the diff of the Numbers in Num2: " << Num2 << endl;
	Num2 = 6;
	Calc(Num2);
	cout << "Here is the number multiplied by itself: " << Num2 << endl;
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
/*Over loaded functions are two or more functions with SAME name and DIFFERENT
parameters, meaning different prototype or signature */
void Calc(int& p)//overloaded Calc function, invoked based on context
{
	p = p * p;//multiplying value by itself
}


//float paycheck(float, float);//wage, hours
//float paycheck(float);//salary