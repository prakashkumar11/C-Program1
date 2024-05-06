//Operator Overloading Program--04
//Write a program to find ++ prefix unary operator

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
        cout <<"Enter number : "<<endl;
        cin >>num;
    }
    void put()
    {
        cout <<"Number : " <<num <<endl;
    }
    void operator --()
    {
        --num;
    }
};

int main()
{
    Test obj;
    obj.get();
    obj.put();
    --obj;
    obj.put();
    --obj;
    --obj;
    obj.put();

    return 0;
}
