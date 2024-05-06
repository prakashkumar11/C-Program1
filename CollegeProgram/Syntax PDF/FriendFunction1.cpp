//Friend Function
#include<iostream>
#include<conio.h>

using namespace std;

class sum
{
    int a, b;
    void get_number(void);
    friend int add(void);//Friend Function, It is non-member function
};

void sum :: get_number(void)
{
    cout <<"Enter Any Two Numbers : \n";
    cin >> a >> b ;
}

int add(void)   // Function Definition
{
    sum s;
    int temp;
    s.get_number();
    temp = s.a + s.b;//Accessing private data (a and b) from non-member function (friend function)
    return temp;
}

int main()
{
    int result;
    result = add();
    cout <<"Sum = " <<result <<endl;
    return 0;
}
