/*Write a program to check a number is even or odd, swap the value of two variables
    and first Smollest from three numbers using multilevel inheritance...*/

#include<iostream>
#include<conio.h>

using namespace std;

class base1
{
protected:
    int n;
public :
    void get1()
    {
        cout <<"Enter a number :\n";
        cin >>n;
    }
    void check()
    {
        if(n%2==0)
            cout<<"Even"<<endl;
        else
            cout<<"Odd"<<endl;
    }
};

class Derive1 : public base1
{
protected:
    int m;
public:
    void get2()
    {
        cout <<"Enter two number :\n";
        cin >>m;
    }
    void swap()
    {
        n=n+m;
        m=n-m;
        n=n-m;

        cout <<"1st Value :\n" <<n<<endl<<"2nd Value :\n"<<m<<endl;
    }
};

class Derive2 : public Derive1
{
protected:
    int p;
public:
    void get3()
    {
        cout <<"Enter three numbers :\n";
        cin >>p;
    }
    void smoll()
    {
        int s=n;
        if(m<s)
            s=m;
            if(p<s)
            s=p;

        cout <<"Smollest Number:\n" <<s<<endl;
    }

};

class Derive3 : public Derive2
{
protected :
    int x,y;
public :
    void get4()
    {
        cout <<"Enter two number : "<<endl;
        cin >>x;
    }
    void greater()
    {
        int a, b;
        if(a>b)
            cout <<"a Is greater than : "<<a<<endl;
        if(b>a)
            cout <<"b Is greater than : "<<b<<endl;

        string r;
        cout <<"Press Any Keyboad Button To Print Coder Name :"<<endl;
        cin >>r;
        cout <<"CHHOTU SHARMA \n"<<endl;

    }
};

int main()
{
    Derive3 p1;

    p1.get1();
    p1.check();

    p1.get1();
    p1.get2();
    p1.swap();

    p1.get1();
    p1.get2();
    p1.get3();
    p1.smoll();

    p1.get4();
    p1.greater();


    return 0;
}
