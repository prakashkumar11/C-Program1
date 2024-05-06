//Operator Overloading Program--05
//Write a program to overload ++ prefix unary operator

#include<iostream>
#include<conio.h>

using namespace std;

class Test
{
    int num;
public:
    void get()
    {
        cout <<"Enter Number : " <<endl;
        cin >>num;
    }
    void put()
    {
        cout <<"Number : " <<num<<endl;
    }
    void operator ++()
    {
        ++num;
    }
};

int main()
{
    Test ob;
    ob.get();
    ob.put();
    ++ob;
    ob.put();

    return 0;
}
