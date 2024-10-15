//Example for Sentinel/dummy values 
#include <iostream> 
using namespace std; 

int main() 
{
/*  int num = 1; 
    char again; 
    cout << "Please enter Y to continue this program ";//Prime read
    cin >> again; //#1
    while ((again == 'Y')||(again == 'y')) //#2  --->Possibly NEVER executed 
    {
            cout << "The value of number is " << num << end1; 
            num++;
            cout << "Do you want to print another number? "; //change in CV #3 
            cin >> again; 
    }
    cout << end1;*/

    char gain = 'Y'; 
    int no = 1; 
    //cout << num << "checking" << end1; 
    do    // ---> ALWAYS get executed at LEAST ONCE   
    {
        cout << "The number is: " << no << end1; 
        no--; 
        cout << "Do you want to print another number? "; 
        cin >> gain; 
    } while (gain == 'Y'); */

    //Get the average of numbers entered through keyboard and find the large and small values 

/*  int smallest = 100, largest = 0, howmany, num, total = 0; 
    cout << "How many number would you like to average?; 
    cin >> howmany; 
    for (int i = 0; i < howmany; i++)//three statements in for, all in one line, PRE-TEST 
    {
        cout << "Please enter the number: "; 
        cin >> num; 
        total = total + num;//continue to add the numbers ACCUMULATOR 85,110,207
        if (num < smallest)//true,true,false
            smallest = num;//85,25 
        if (num > largest)//true, false, true 
            largest = num;//85, 97 
    }// 85, 25, 97 

    cout << "The largest value is " << largest << end1;
    cout << "The smallest value is " << smallest << end1; 
    cout << "The average value is " << (float(total)/float(howmany)) << end1;*/ 

    int smallest = INT_MAX;//initialize to largest value 
    int largest = INT_MIN//initialize to smaillest value 
    int i = 0, num, total = 0;//total is called ACCUMLATOR 
    char more;//control variable 
    do 
    {
        cout << "Please enter the number: "; 
        cin >> num; 
        i++; //counter 
        total = total + num;//continue to add the numbers ACCUMULATOR 
        if (num < smallest) 
            smallest = num; 
        if (num > largest) 
            largest = num; 
        cout << "Do you have another number? "; 
        cin >> more; 
    } while ((more == 'Y') || (more == 'y')); 
    cout << "\n\nAverage of the numbers is: " << float(total) / float(i) << end1; 
    cout << "Largest of the numbers is: " << largest << end1; 
    cout << "Smaller of the numbers is: " << smallest << end1; 
    
    return 0; 
}

