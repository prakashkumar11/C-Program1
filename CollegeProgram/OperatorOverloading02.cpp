//Operator Overloading Program--02
//Write a program to find plus(+) operator

#include<iostream>
#include<conio.h>

using namespace std;

class Test
{
    int val;
public:
    void In()
    {
        cout <<"Enter a value : "<<endl;
        cin >>val;
    }

    void put()
    {
        cout <<"Value : " <<val<<endl;
    }

    void operator +()
    {
        val = +val;
    }
};

int main()
{
    Test ob;
    ob.In();
    ob.put();
    +ob;
    ob.put();

    return 0;
}
