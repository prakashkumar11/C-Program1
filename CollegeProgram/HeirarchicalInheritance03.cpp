//Write to display record of a student and a teacher in use Heirarchical inheritance
//Defined Outside Class...

#include<iostream>
#include<conio.h>

using namespace std;

class A
{
protected:
    char name[20];
    char gd[10];
    char add[40];
public :
    void get1();
    void out1();
};

void A :: get1()
{
    cin >>name>>gd>>add;
}
void A :: out1()
{
    cout <<"\nName : " <<name <<ends <<"\nGender : " <<gd <<ends <<"Address : " <<add <<endl;
}

class student : public A
{
protected:
    int roll;
    int mark;
public:
    void get2();
    void out2();
};

void student :: get2()
{
    cout <<"Enter Student Roll And Mark : "<<endl;
    cin >>roll>>mark;
}
void student :: out2()
{
    cout <<"Student Roll : " <<roll <<ends <<"\nStudent Mark : " <<mark <<endl;
}

class teacher : public A
{
protected :
    char id[10];
    long bs;
public :
    void get3();
    void out3();
};

void teacher :: get3()
{
    cout <<"Enter Teacher ID : " <<id <<ends <<"\nEnter Teacher Salary : " <<bs <<endl;
    cin >>id >>bs;
}
void teacher :: out3()
{
    cout <<"Teacher ID : " <<id <<ends <<"\n Teacher Salary : " <<bs <<endl;
}

int main()
{
    cout <<"Enter Name Gender And Address Of A Student : "<<endl;
    student p1;
    p1.get1();
    p1.get2();
    p1.out1();
    p1.out2();

    cout <<"Enter Name Gender And Address Of A Teacher : " <<endl;
    teacher p2;
    p2.get1();
    p2.get3();
    p2.out1();
    p2.out3();

    return 0;
}
