//Write a program to check a number is even or odd, prime or not and palindrome or not...

#include<iostream>
#include<conio.h>

using namespace std;

class A
{
protected:
    int n;
public:
    void input()
    {
        cout <<"Enter Number To Check : ";
        cin >>n;
    }
};
class B : public A
{
public:
    void check1()
    {
        if(n%2==0)
            cout <<"\nEven Number";
        else
            cout <<"\nOdd Number";
    }
};
class C : public A
{
public:
    void check2()
    {
        int count=0;
        for(int i=1; i<n/2; i++)
        {
            if(n%i==0)
            {
                count ++;
            }
        }
        if(count==1)
            cout <<"\nPrime Number";
        else
            cout <<"\nNot Prime Number";
    }
};
class D : public A
{
public:
    void check3()
    {
        int c,p,r;
        c=n;
        p=0;
        while(n>0)
        {
            r=n%10;
            p=(p*10)+r;
            n=n/10;
        }
        if(c==p)
            cout <<"\nPalindrome Number";
        else
            cout <<"\nNot Palindrome Number";
    }
};



int main()
{
    B p1;
    p1.input();
    p1.check1();

    C p2;
    p2.check2();

    D p3;
    p3.check3();

    return 0;

}
