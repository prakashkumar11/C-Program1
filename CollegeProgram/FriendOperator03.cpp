
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
        cout <<"Number : " <<num <<endl;
    }
    friend Test operator +(Test t, Test t1);
};

Test operator +(Test t, Test t1)
{
    t.num=t.num+t1.num;
}

int main()
{
    Test ob1, ob2, ob3;
    ob1.get();
    ob1.put();
    ob2.get();
    ob2.put();

    ob3=ob1+ob2;

    ob3.put();

    return 0;
}
