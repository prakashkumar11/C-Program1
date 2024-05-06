/* Write a program to calculate gross salary of an employee with following data members using
multiple Inheritance...
--Employee Id
--Employee Name
--Employee Address
--Gender
--DA, HRA, BS
*/

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

class Emp1
{
protected:
    int id;
    char name[50];
public:
    void In1()
    {
        cout <<"Enter Employee Id And Employee Name :\n";
        cin >>id >>name;
    }
    void Out1()
    {
        cout <<endl;
        cout <<"Employee Id :\n"<<id <<endl <<"Employee Name:\n"<<name;
    }
};

class Emp2
{
protected:
    char ad[50];
    char gd[20];
public :
    void In2()
    {
        cout <<"Enter Employee Address And Gender :\n";
        cin >>ad >>gd;
    }
    void Out2()
    {
        cout <<endl;
        cout <<" Employee Address :\n"<<ad <<endl <<"Employee Gender :\n"<<gd;
    }
};

class Derive : public Emp1, public Emp2
{
protected:
    float DA, HRA, BS, GS;
public :
    void In3()
    {
        cout <<"Enter Employee DA,HRA and BS :\n";
        cin >>DA >>HRA >>BS;
    }
    void Put()
    {
        GS = BS+DA+HRA;
    }
    void Out3()
    {
        cout <<endl;
        cout <<"Gross Salary :\n"<<GS;
    }
};

int main()
{
    Derive p1;

    p1.In1();
    p1.In2();
    p1.In3();

    p1.Put();

    p1.Out1();
    p1.Out2();
    p1.Out3();

    return 0;
}


