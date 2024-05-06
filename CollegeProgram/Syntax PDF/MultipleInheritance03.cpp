// Calculate Student Name, Roll and Percentage of marks
#include<iostream>
#include<conio.h>

using namespace std;

class student1
{
protected:
    int roll;
    string name;
public :
    void input1();
    void output1();
};

void student1 :: input1()
{
    cout <<"Enter Name And Roll Number Of Student :\n";
    cin >>name >>roll;
}
void student1 :: output1()
{
    cout <<"Name :\n" <<name <<"\nRoll No. :\n" <<roll;
}

class derive : public student1
{
protected:
    int num, i;
    float marks[10], per=0, total=0;
public :
    void show();
};

void derive :: show()
{
    cout <<endl<<"Enter Number Of subject :\n";
    cin >>num;

    cout <<"Enter Marks Of " << num <<" Subject:\n";ṇ
    for(i=0; i<num; i++)
    {
        cin >>marks[i];
    }
    for(i=0; i<num; i++)
    {
        total = total+marks[i];
    }
    per = total/num;
    cout <<"Percentage :\n" <<per;
}
int main()
{
    derive p1;

    p1.input1();
    p1.output1();

    p1.show();

    return 0;
}
