//Write A Program To Calculate Area Of circle And Area Of square Using constructor Inheritance

#include<iostream>
#include<conio.h>

using namespace std;

class A
{
protected:
    float num,Area;
public :
    A()
    {
        cout <<"Enter any number : ";
        cin >>num;
    }
};

class B : public A
{
public:
    B()
    {
        Area = 3.14*num*num;
        cout <<"\nArea Of Circle : " <<Area;
    }
};
class C : public A
{
public:
    C()
    {
        Area = num*num;
        cout <<"\n Area Of square : " <<Area;
    }
};

int main()
{
    A A a=12;


    return 0;

}
