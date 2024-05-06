//Multiple Inheritance Constructor in Derived Class In c++

#include<iostream>
#include<conio.h>

using namespace std;

class A
{
private:
    int a;
protected:
    int b;
public:
    A(int i, int j)
    {
        a=i;
        b=j;
        cout <<"A Initialized"<<endl;
    }

    void display_ab(void)
    {
        cout <<"\nThe Value Of a is : "<<a;
        cout <<"\nThe Value Of b is : "<<b;
    }

    int get_a(void)
    {
        return a;
    }
};

class B
{
private:
    int c;
protected:
    int d;
public:
    B(int i, int j)
    {
        c=i;
        d=j;
        cout <<"B Initialized" <<endl;
    }

    void display_cd(void)
    {
        cout <<"\nThe Value of c is : " <<c;
        cout <<"\nThe value of d is : " <<d;
    }
    int get_c(void)
    {
        return c;
    }
};

class C : public A , public B
{
    int e, f, total;
public:
    C(int m, int n, int o, int p, int q, int r) : A(m, n), B(o, p)
    {
        e=q;
        f=r;
        cout <<"C Initialized"<<endl;
    }

    void sum()
    {
        total = get_a()+b+get_c()+d+e+f;
    }
    void display(void)
    {
        cout <<"\nThe Value of e is : "<<e;
        cout <<"\nThe Value of f is : "<<f;
        cout <<"\nThe sum of a,b,c,d,e and f is : "<<total;
    }
};

int main()
{
    C p1(10,20,30,40,50,60);
    p1.display_ab();
    p1.display_cd();
    p1.sum();
    p1.display();

    return 0;
}
