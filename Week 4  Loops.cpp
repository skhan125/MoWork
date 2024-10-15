//loops 
#include <iostream> 
using namespace std; 

//There are three types of loops. "while", "do while" and "for"
int main()
{ 
    //Print the values of cv 1 to 10 
    //#1 is CONTROL variable #2 test #3 change 
/*
    for(int i=1;i<=10;i++)// is a FIXED, PRE-TEST loop 
    {//block of code 
        cout << "Value of i is: " << i << endl; 
    }
    cout << endl;//break in output 
 
    int j = 0;//#1
    while (j < 10)// is a VARIABLE, PRE-TEST loop #2 
    {
        cout << "Value of j is: " << j << endl; 
        j++;#3 
    } 
    cout << endl;//break in output 

    int k = 1;//#1
    do //
      is VARIABLE, POST-TEST loop 
    {
        cout << "Value of k is: " << k << endl; 
        k++;//#3
    } while (k <= 10);//don't forget the semicolon after the while and its condition. #2
    cout << endl;//break in output 
  

    return 0; 
}
