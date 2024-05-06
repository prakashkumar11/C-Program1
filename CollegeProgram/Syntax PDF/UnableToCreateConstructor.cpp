#include<iostream>
#include<conio.h>

using namespace std;

class student
{
public :
    student()
    {
    }
    student(int, int);
};

student :: student(int a, int b)
{
    cout <<"Value Of A : " << a << endl;
    cout <<"Value Of B : " << b << endl;
}

int main()
{
    student stu1;
    student stu=student(10,145);

    return 0;
}
