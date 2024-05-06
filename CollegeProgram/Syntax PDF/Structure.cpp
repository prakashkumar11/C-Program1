#include<iostream>

using namespace std;

struct student
{
    int roll;      // structure of members...!
    char name[20];
};

int main()
{
    struct student stu;
    //Access the structure of member...!
    cout <<"Enter Name : ";
    cin >>stu.name;
    cout <<"Enter Roll : ";
    cin >>stu.roll;

    cout <<endl;
    cout <<"Name : "<<stu.name <<endl;
    cout <<"Roll : "<<stu.roll <<endl;
    return 0;
}
