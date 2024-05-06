// Declaration of Destructor

#include<iostream>
#include<conio.h>

using namespace std;

class student
{
private:
    char name[20], add[20];
    int roll, zip;
public:
    student(); //Constructor
    ~student();//Destructor
    void read();
    void disp();
};

student :: student( )
{
    cout <<"\n Student Details : " << endl;
}

void student :: read( )
{
    cout <<"Enter student name : ";
    cin >>name;
    cout <<"Enter student roll no : ";
    cin >>roll;
    cout <<"Enter student address : ";
    cin >>add;
    cout <<"Enter pincode : ";
    cin >>zip;
}

void student :: disp( )
{
    cout << endl<<"Student Name : "<< name << endl;
    cout <<"Roll No      : "<< roll << endl;
    cout <<"Address      : "<< add << endl;
    cout <<"Pincode      : "<< zip << endl;
}

student :: ~student( ) // Defined Destructor
{
    cout <<"\n\nStudent Detail Closed and related object destroyed. " << endl;
}

int main( )
{
    {
        student s1;
        s1.read( );
        s1.disp( );
    }
    getch();

    student s2;
    s2.read( );
    s2.disp( );
    getch();

    return 0;
}
