//Constructor with inheritance--
//Write a program to find Minimum from two numbers using inheritance with parameter constructor 
//and default destructor

#include<iostream>
#include<conio.h>

using namespace std;

class Base
{
protected:
    int x;
public:
    Base(int a)
    {
        x=a;
    }
    ~Base()
    {
        cout <<"Base Class destroyed"<<endl;
    }
};

class Derive : public Base
{
protected:
    int y;
public:
    Derive(int a, int b) : Base(a)
    {
        y=b;
    }
    void smollest()
    {
        if(x<y)
            cout <<"Minimum Number : "<<x<<endl;
        else
            cout <<"Minimum Number : "<<y<<endl;
    }
    ~Derive()
    {
        cout <<"Derive Class Destroyed"<<endl;
    }
};

int main()
{
    int a, b;
    cout <<"Enter Two Number : " <<endl;
    cin >>a>>b;

    Derive d(a,b);
    d.smollest();

    return 0;
}
