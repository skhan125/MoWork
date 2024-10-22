//two way communication
#include <iostream>
using namespace std;

/* This is a value function with two integer parameters. This function returns an
integer value which is the product of the two numbers that are passed as parameters*/
int Product(int, int);

int main()
{   int n1, n2;
cout << "Please enter two integers:";
cin >> n1 >> n2;
//n1 and n2 are ACTUAL parameters(arguments)VALUES -->constanct/variables/expression/fn call
cout << "The product of " << n1 << " and " << n2 << " is: " << Product(n1, n2) << endl;
return 0;
}

//VAR = VALUE;
//int Product(int n1, int n2)
int Product(int N1, int N2)//N1 and N2 are FORMAL parameters(parameters) VARIABLES
{
	return (N1 * N2);
}