//Function Overloading Program-01...

#include<iostream>
#include<conio.h>

using namespace std;

int value (int);
double value (double);
char value (char);
double value (int, double);
int value (int, int);

int main()
{
    cout <<"\n Integer      : " <<value (10);
    cout <<"\n Double       : " <<value (12.34);
    cout <<"\n char         : " <<value ('c');
    cout <<"\n Double       : " <<value (2,12.5);
    cout <<"\n Integer      : " <<value (12,15);

    return 0;
}

int value(int x)
{
    return x;
}
double value(double y)
{
    return y;
}
char value (char z)
{
    return z;
}
double value (int m, double n)
{
    return (m+n);
}
int value (int a, int b)
{
    return (a+b);
}
