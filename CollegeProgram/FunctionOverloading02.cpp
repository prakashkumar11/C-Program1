//Function Overloading Program--02
#include<iostream>
#include<conio.h>

using namespace std;

int fun(int);
int fun(int, int);
double fun (double);
double fun(double, double);

int main()
{
    cout <<"Integer     : " <<fun(10)<<endl;
    cout <<"Integer     : " <<fun(11,12)<<endl;
    cout <<"Double      : " <<fun(12.4) <<endl;
    cout <<"Double      : " <<fun(11.2,10.1)<<endl;

    return 0;
}

int fun (int a)
{
    return a;
}
int fun (int b, int c)
{
    return (b+c);
}
double fun(double m)
{
    return m;
}
double fun(double x, double y)
{
    return (x+y);
}
