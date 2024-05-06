//Constructor with inheritance--
//Write a program to find Minimum from two numbers using inheritance with default constructor and destructor

#include<iostream>
#include<conio.h>

using namespace std;

class A
{
protected:
    int x;
public:
    A()
    {
        x=15;
    }
    ~A()
    {
        cout <<"A Object Destroyed"<<endl;
    }
};

class B : public A
{
protected:
    int y;
public:
    B()
    {
        y=10;
    }
    ~B()
    {
        cout <<"B Object Destroyed"<<endl;
    }
    void smollest()
    {
        if(x<y)
            cout <<"Smollest Number : "<<x<<endl;
        else
            cout <<"Smollest Number : "<<y<<endl;
    }
};

int main()
{
    B b;
    b.smollest();

    return 0;
}
