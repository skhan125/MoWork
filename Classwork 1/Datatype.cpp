//Anything #include is a prewritten code made availible to the user from the system library
#include <iostream>//for reading or writing
#include <string>//for working with string data
using namespace std;

int main()//function header--entry into program from OS
{//beginning of function body
  string firstname = "John";//declaration and initialization
  string lastname = "Smith";//declaration and initialization
  int id = 555; //integer datatype
  float gpa = 3.54f;//float datatype, fixed truncation warning
  double hairSize = .000000036;//double datatype --> expansion of float
  char grade = 'C';//char datatype for single character data (fixed to use single quotes)
  bool tuitionPaid = true;//bool datatype for toggle type data

  //Printing the data to output screen
  cout << "\nSTUDENT INFORMATION\n" << endl;//cout is used to send data to output
  cout << "First Name: \t" << firstname << endl;// << is called stream INSERTION operator
  cout << "Last Name: \t" << lastname << endl;// The caption is a literal string
  cout << "ID:\t\t" << id << endl;
  cout << "GPA:\t\t" << gpa << endl;
  cout << "Hair Size: \t" << hairSize << endl;
  cout << "Grade:\t\t" << grade << endl;
  cout << "Tuition Paid: \t" << tuitionPaid << endl;

  //Finding out where exactly our data is stored on our computer
  //& is called the "address of" operator
  cout << "\nSTUDENT INFORMATION\n" << endl;
  cout << "First Name: \t" << firstname << " is stored at location " << &firstname << endl;
  cout << "Last Name: \t" << lastname << " is stored at location " << &lastname << endl;
  cout << "ID: \t\t" << id << " is stored at location " << &id << endl;
  cout << "GPA: \t\t" << gpa << " is stored at location " << &gpa << endl;
  cout << "Hair Size: \t" << hairSize << " is stored at location " << &hairSize << endl;
  cout << "Grade: \t\t" << grade << " is stored at location " << &grade << endl;
  cout << "Tuition Paid: \t" << tuitionPaid << " is stored at location " << &tuitionPaid << endl;

  //Find out how much space is needed by each datatype in my compiler
  //sizeof is a function
  cout << "\nInteger size is: \t" << sizeof(int) << " bytes" << endl;
  cout << "Short size is: \t\t" << sizeof(short) << " bytes" << endl;
  cout << "Long size is: \t\t" << sizeof(long) << " bytes" << endl;
  cout << "Float size is: \t\t" << sizeof(float) << " bytes" << endl;
  cout << "Double size is: \t\t" << sizeof(double) << " bytes" << endl;
  cout << "Character size is: \t\t" << sizeof(char) << " bytes" << endl;
  cout << "Bool size is: \t\t" << sizeof(bool) << " bytes" << endl << endl;

  return 0;//indicates successful completion of program and return to OS
}// end of function body
