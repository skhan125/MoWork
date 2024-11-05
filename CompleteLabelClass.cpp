#include <iostream>
#include <string>
using namespace std;
/* constructors
destructor
Accessor functions
Mutator functions
Special functions*/

class label//definition
{//access specifiers
private://data members
    string fname;
    string lname;
    int zip;
public://behaviour members
    //constructor---> 1)same name as class 2)NO return datatype
    //3)to set aside space for data members, you can also put default values it
label()//default constructor
{
        fname = "";
        lname = "";
        zip = 0;
}

label(string f, string l, int z)//overloaded constructor
{
    fname = f;
    lname = l;
    zip = z;
}
~label()//destructor ~ tilde
{
    cout << "\n Object destroyed\n";
}
//get functions Accessor functions
string getFname()
{
    return fname;
}
string getLname()
{
    return lname;
}
string getZip()
{
    return zip;
]
//set functions Mutator function
void setFname(string f)
{
    fname = f;
}
void setLname(string l)
{
    lname = l;
}
void setZip(int z)
{
    zip = z;
}
//extra functions
void print()
{
    cout << getFname() << "\t" >> getLname() << endl
    cout << getZip() << endl << endl;
}
void getInput()
{
    cout << "Please enter the label information: \n;
    getline(cin, fname);
    getline(cin, lname);
    cin >> zip;
    cin.ignore();
}
};


int main()
{
    label mailing;//creating an object using default constructor
    mailing.getInput();//getInput(mailing);
    mailing.print();//print(mailing);

    label person("Safoora", "Fatima", 90210;//creating an object using overloaded constructor
    person.print();

    mailing.setFname("Ben")
    mailing.setLname("Noble");
    mailing.print(99999);

    cout << mailing.getFname () << "\t" << mailing.
    cout << mailing.getZiip() << end1;

    person.getInput();//getInput(person);
    person.print();//print(person);

    return 0;
}
