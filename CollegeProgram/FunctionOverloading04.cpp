//Function Overloading Program--04
/*Write a program to calculate square of a number, square root of a number and cube of a number */
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class Square
{
protected:
    double sqr;
public:
    void cal(int x )
    {
        sqr = x*x;
        cout <<"Square Number : " <<sqr<<endl;
    }
    void cal(float n)
    {
        sqr = sqrt(n);
        cout <<"Square Root Number : " <<sqr<<endl;
    }
    void cal(double num)
    {
        sqr = num*num*num;
        cout <<"Cube Number         : " <<sqr<<endl;
    }
};

int main()
{
    int x; float n; double num;
    cout <<"Enter Number To Find Square Number      : " <<endl;
    cin >>x;

    cout <<"Enter Number To Find Square Root Number : " <<endl;
    cin >>n;

    cout <<"Enter Number To Find Cube Number         : " <<endl;
    cin >>num;

    Square ob;
    ob.cal(x);
    ob.cal(n);
    ob.cal(num);

    return 0;
}
