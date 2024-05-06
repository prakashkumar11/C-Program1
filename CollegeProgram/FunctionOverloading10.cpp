//Function Overloading Program --10
/*Write a program to calculate area of circle, triangle,
    rectangle and square using function overloading */

#include<iostream>
#include<conio.h>

using namespace std;

class Area
{
protected:
    float area;
public:
    void show(int r)
    {
        area = 3.14*r*r;
        cout <<"Area Of circle : " <<area<<endl;
    }
    void show(int l, int b)
    {
        area = l*b;
        cout <<"Rectangle : " <<area <<endl;
    }
    void show(float n)
    {
        area = n*n;
        cout <<"Square : " <<area <<endl;
    }
    void show(float c, float h)  //b=c
    {
        area = 0.5*c*h; //b=c
        cout <<"Triangle : " <<area <<endl;
    }
};

int main()
{
    int r, l, b;
    float n, c, h;

    cout <<"Enter Radius : " <<endl;
    cin >>r;

    cout <<"Enter Length and Breath : " <<endl;
    cin >>l>>b;

    cout <<"Enter Number : " <<endl;
    cin >>n;

    cout <<"Enter Base and Height : " <<endl;
    cin >>c>>h;

    Area ob;

    ob.show(r);
    ob.show(l,b);
    ob.show(n);
    ob.show(c,h);

    return 0;

}
