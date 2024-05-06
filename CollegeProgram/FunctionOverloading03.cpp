//Function Overloading Program--03
/* Write C++ Program to calculate simple interest and compound interest...*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class Interest
{
protected:
    float I;
public:
    void show(int a, int b, int c)  // Defined is Principle=a, Rate=b, Time=c
    {
        I = (a*b*c)/100;
        cout <<"Simple Interest : " <<I<<endl;
    }
    void show(float p, float r, float t)
    {
        I = p*pow((1+r/100),t)-p;
        cout <<"Compound Interest : " <<I<<endl;
    }
};

int main()
{
    int a,b,c;
    float p,r,t;
    cout <<"Enter Principle Rate And Time : " <<endl;
    cin >>a>>b>>c;

    cout <<"Enter Principle Rate And Time : " <<endl;
    cin >>p>>r>>t;

    Interest ob;
    ob.show(a,b,c);
    ob.show(p,r,t);

    cout <<"code by chhotu sharma"<<endl;

    return 0;
}
