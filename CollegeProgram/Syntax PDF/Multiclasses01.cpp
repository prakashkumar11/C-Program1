/*Multiple classes->C++ object oriented language allows one or more than one classes in a
program for perform different operation

Q->Write a program to calculate area of rectangle, triangle and square...*/

#include<iostream>
#include<conio.h>

using namespace std;

class Rectangle
{
    float l, b, A;
public :
    void input()
    {
        cout <<"Enter Length and Breath :\n";
        cin >> l >> b;
    }
    void calculate()
    {
        A = l*b;
    }
    void output()
    {
        cout <<"Area = " << A <<endl;
    }
};

class Triangle
{
    float b, h, T;
public :
    void input()
    {
        cout <<"Enter Base and Height :\n";
        cin >> b >> h;
    }
    void calculate()
    {
        T = 0.5*b*h;
    }
    void output()
    {
        cout <<"Triangle : " << T << endl;
    }
};

class Square
{
    float a, Sqr;
public :
    void input()
    {
        cout <<"Enter Angle :\n";
        cin >> a;
    }
    void calculate()
    {
        Sqr = a*a;
    }
    void output()
    {
        cout <<"Square = " << Sqr << endl;
    }
};

int main()
{
    Rectangle p1;
    p1.input();
    p1.calculate();
    p1.output();

    Triangle p2;
    p2.input();
    p2.calculate();
    p2.output();

    Square p3;
    p3.input();
    p3.calculate();
    p3.output();

    return 0 ;
}

