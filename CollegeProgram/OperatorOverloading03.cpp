//Operator Overloading Program--03
//Write a program to find *(Multiplication) operator
#include<iostream>
#include<conio.h>

using namespace std;

class Test
{
    int x,y,z;
public:
    void In()
    {
        cout <<"Enter a value : "<<endl;
        cin >>x>>y;
    }

    void put()
    {
        cout <<"Value : " <<z<<endl;
    }

    void operator *()
    {
        z=x*y;
    }
};

int main()
{
    Test ob;
    ob.In();
    *ob;
    ob.put();

    cout <<"Code By ChhoTu SharMa " <<endl;

    return 0;
}
