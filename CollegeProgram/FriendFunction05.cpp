//Addition of two number using friend function in c++...

#include<iostream>
#include<conio.h>

using namespace std;

class Base
{
    int a, b;
public:
    void in()
    {
        cout <<"Enter Value : " <<endl;
        cin >>a >>b;
    }

    friend void add( Base ob);
};

void add(Base ob)
{
    int c;
    c=ob.a+ob.b;
    cout <<"Value : " <<c <<endl;
}

int main()
{
    Base ob1;
    ob1.in();
    add(ob1);

    return 0;
}
