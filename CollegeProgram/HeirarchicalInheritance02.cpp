//Write a program to calculate Area of circle and Area of square using Heirarchical inheritance
//Defined Inside Class
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class A
{
protected:
    float r, Area;
public :
    void get()
    {
        cin >>r;
    }
};
class B : public A
{
public :
    void circle()
    {
        Area = 3.14*r*r;
        cout <<"Area Of Circle : " <<Area <<endl;
    }
};

class C : public A
{
public :
    void square()
    {
        Area = r*r;
        cout <<"Area Of Square : " <<Area;
    }
};

int main()
{
    cout <<"\nEnter Radius : " <<endl;

    B p1;
    p1.get();
    p1.circle();

    cout <<"\nEnter Size : " <<endl;

    C p2;
    p2.get();
    p2.square();

    return 0;
}
