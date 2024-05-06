/*Polymorphism Program...
Write a program to calculate area of circle, triangle, rectangle and square using function overloading
*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;



class A{
public:
    float area;
public:
    void show(int r)
    {
        area=3.14*r*r;
        cout <<"Area of circle : " <<area <<endl;
    }
    void show(float n)
    {
        area = n*n;
        cout <<"Area of square : " <<area <<endl;
    }
    void show(int l, int b1)
    {
        area = l*b1;
        cout <<"Area of rectangle : " <<area <<endl;
    }
    void show(float b, float h)
    {
        area = 0.5*b*h;
        cout <<"Area of triangle : " <<area <<endl;
    }
};


int main()
{
    int r, b1, l;
    float n, b, h;

    cout <<"Enter Radius : " <<endl;
    cin >>r;
    cout <<"Enter Length and Breath : " <<endl;
    cin >>l>>b;
    cout <<"Enter Any Number : " <<endl;
    cin >>n;
    cout <<"Enter Base and Height : " <<endl;
    cin >>b>>h;

    A ob;
    ob.show(r);
    ob.show(l,b1);
    ob.show(n);
    ob.show(b,h);

    return 0;
}
