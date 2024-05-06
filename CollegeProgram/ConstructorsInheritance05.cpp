
//Constructor with inheritance--
//Write a program to find greater from two numbers using inheritance with parameter constructor and default destructor

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
        cout <<"Base Class Object Is Destroyed"<<endl;
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
    ~Derive()
    {
        cout <<"Derive Class Object Destroyed"<<endl;
    }
    void greater()
    {
        if(x>y)
            cout <<"Greater Number : " <<x<<endl;
        else
            cout <<"Greater Number : "<<y<<endl;
    }
};

int main()
{
    int a, b;
    cout <<"Enter Two Number : "<<endl;
    cin >>a>>b;

    Derive d(a,b);
    d.greater();

    return 0;
}
