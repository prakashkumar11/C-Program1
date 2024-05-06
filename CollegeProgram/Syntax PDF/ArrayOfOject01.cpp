// EXAMPLE-01 ARRAY OF OBJECT...#

#include<iostream>
#include<conio.h>
#define SIZE 3
using namespace std;

class student
{
    int roll;
    char name[20];

public :
    void getdata(void);
    void display(void);
};

void student :: getdata(void)
{
    cout <<"Enter name... " ;
    cin >>name;

    cout <<"Enter roll... " ;
    cin >> roll;
}

void student :: display(void)
{
    cout <<"Name : " << name << endl;
    cout <<"Roll : " << roll <<endl;
    cout <<"Press Enter Button To Continue..." << endl;
    getch();
}

int main()
{
    student st[SIZE];
    for(int i=0; i<SIZE; i++)
    {
        cout <<"Get Detail Of Student..." <<i+1 <<endl;
        st[i].getdata();
    }

    for(int i=0; i<SIZE; i++)
    {
        cout <<"Display Detail Of Student..." <<i+1 <<endl;
        st[i].display();
    }
    return 0;
}

