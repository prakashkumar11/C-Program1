
//Constructor with inheritance--
//Write a program to find greater from two numbers using inheritance with default constructor

#include<iostream>
#include<conio.h>

using namespace std;

class Base
{
protected:
    int x;
public :
    Base() //constructor
    {
        x=15;
        cout <<"\nConstructor-1";
    }
};

class Derive : public Base
{
protected:
    int y;
public:
    Derive() //constructor
    {
        y=10;
        cout <<"\nConstructor-2";
    }
    void greater()
    {
        if(x>y)
            cout <<"Greater Number : "<<x<<endl;
        else
            cout <<"Greater Number : "<<y<<endl;
    }
};

int main()
{
    Derive D; //create object automatic invocked constructor
    // D.greater();

    return 0;
}
