//Constructor Overloading...

#include<iostream>
#include<conio.h>

using namespace std;

class student
{
private:
    int roll;
    int mark;
public:
    student();
    student(int);
    student(int, int);
    void show(void);
};
student :: student()
{
    roll=10;
    mark=10;
}
student :: student(int a)
{
    roll = mark = a;
}

student :: student(int x, int y)
{
    roll=x;
    mark=y;
}
void student :: show(void)
{
    cout <<"Roll : " << roll << endl;
    cout <<"Mark : " << mark << endl;
}

int main()
{
                            //student stu, stu1, stu2;
                            //  stu1 = student(20);
    student stu;           //  stu2 = student(10, 10);
    student stu1(20);
    student stu2(10,10);

    stu.show();

    cout <<"\nOne Argument\n";
    stu1.show();
    cout <<"\nTwo Argument\n";
    stu2.show();

    return 0;
}
