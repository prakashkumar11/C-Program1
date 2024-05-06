// One Memory Location Create...!

#include<iostream>

using namespace std;

union student
{
    char name[20];
    int roll;
};
int main()
{
    union student stu1;
    cout <<"Enter Name : ";
    cin >>stu1.name;

    cout <<"Enter Roll : ";
    cin >>stu1.roll;

    cout <<"Name : " <<stu1.name <<endl;
    cout <<"Roll : " <<stu1.roll <<endl;

    return 0;
}
