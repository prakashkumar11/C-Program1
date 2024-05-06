#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class A
{
protected:
    int a, b;
public:
    void get()
    {
        cout <<"Enter Number : "<<endl;
        cin >>a>>b;
    }
};

class B : public A
{
protected:
    int c;
public :
    void cal()
    {
        c=a+b;
    }
};

class C : public B
{
public:
    void disp()
    {
        cout <<"Total : " <<c<<endl;
    }
};

int main()
{
    C ob;
    ob.get();
    ob.cal();
    ob.disp();

    return 0;
}

