//Example for Sentinel/dummy values
#include <iostream>
using namespace std;

int main()
{
/*	int num = 1;
	char again;
	cout << "Please enter Y to continue this program ";//Prime read
	cin >> again; //#1
	while ((again == 'Y') || (again == 'y')) //#2 --->Possibly NEVER executed
	{
		cout << "The value of number is " << num << endl;
		num++;
		count << "Do you want to print another number? "; //change in CV #3
		cin >> again;
	}
	cout << endl; */

/*  char gain = 'Y';
	int no = 1;
	//cout << num << "checking" << end1;
	do // ---> ALWAYS get executed AT LEAST ONCE
	{
		cout << "The number is: " << no << endl;
		no--;
		cout << "Do you want to print anothetr number? ";
		cin >> gain;
	} while (gain == 'Y'); */ 

	//Get the average of 3 numbers entered through keyboard and find the large and small values 

/*	int smallest = 100, largest = 0, howmany, num, total = 0;
	cout << "How many number would you like to average?";
	cin >> howmany;
	for (i = 0; i < howmany; i++) //three statements in for, all in one line, PRE-TEST
	{
		cout << "Please enter the number: ";
		cin >> num;
		total = total + num;//continue to add the numbers ACCUMLATOR 85,110,207
		if (num < smallest)//true,true,false
			smallest = num;//85,25
		if (num > largest)//true, false, true
			largest = num;//85,97
	}// 85, 25, 97

	cout << "The largest value is " << largest << endl;
	cout << "The smallest value is " << smallest << endl;
	cout << "The average value is " << float(total)/float(howmany) << endl; */
	
	int smallest = INT_MAX;//initialize to largest value
	int largest = INT_MIN;//initialize to smallest value
	int i = 0, num, total = 0;//total is called ACCUMULATOR
	char more;//control variable
	do
	{
		cout << "Please enter the number: ";
		cin >> num;
		i++; //counter
		total = total + num;//countinue to add the numbers ACCUMLATOR
		if (num < smallest)
			smallest = num;
		if (num > largest)
			largest = num;
		cout << "Do you have another number? ";
		cin >> more;
	} while ((more == 'Y') || (more == 'y'));
	cout << "\n\nAverage of the numbers is: " << float(total) / float(i) << endl;
	cout << "Largest of the numbers is: " << largest << endl;
	cout << "Smaller of the numbers is: " << smallest << endl;
	
	return 0;
}