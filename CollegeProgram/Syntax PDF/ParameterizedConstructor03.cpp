//Parameterrize Constructor, defined outside class

#include <iostream>
#include <conio.h>

using namespace std;

class student
{
public:
    student(int, int);
};

student :: student(int a, int b)
{
    cout <<"Value Of A : " << a << endl;
    cout <<"Value Of B : " << b << endl;
}


int main()
{
   // student stu = student(10, 145);//Explicitly Call
    student stu(11, 150); //Implicitly call/ shorthand method

    return 0;
}
