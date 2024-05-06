//Operator overloading Program--06
//Write a program to calculate + binary operator
#include<iostream>
#include<conio.h>

using namespace std;

class Test
{
protected:
    int num;
public:
    void get()
    {
        cout <<"Enter Number : " <<endl;
        cin >>num;
    }
    void put()
    {
        cout <<"Number : " <<num <<endl;
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
