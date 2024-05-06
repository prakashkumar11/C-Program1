/*Write a Program to Square root of a number check a number is even or not and swap
 the values of two variables...*/

 #include<iostream>
 #include<conio.h>
 #include<math.h>

 using namespace std;

 class Base1
 {
 protected :
    int n;
 public:
    void Input1()
    {
        cout <<"Enter a Number :\n";
        cin >>n;
    }
    void root()
    {
        cout <<"Square root :" << sqrt(n) <<endl;
    }
 };

 class Base2
 {
 protected :
    int m;
 public :
    void Input2()
    {
        cout <<"Enter a Number :\n";
        cin >>m;
    }
    void check()
    {
        if(m%2==0)
            cout <<"Even" <<endl;
        else
            cout <<"Odd" <<endl;
    }
 };

 class Derive : public Base1, public Base2
 {
 public :
    void swap()
    {
        n=n+m;
        m=n-m;
        n=n-m;

        cout <<"1st Value : "<<n <<"\n 2nd Value : "<<m;
    }
 };

 int main()
 {
     Derive p1;

     p1.Input1();
     p1.Input2();

     p1.root();
     p1.check();

     p1.Input1();
     p1.Input2();

     p1.swap();

     return 0;
 }

