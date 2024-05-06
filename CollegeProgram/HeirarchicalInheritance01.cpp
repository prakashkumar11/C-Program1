//Write A Program To Calculate Simple Interest and compound Interest Using Heirarchical Inheritance

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class Base
{
protected:
    float p, r, t, I ;
public:
    void get(float x, float y, float z)
    {
        p=x;
        r=y;
        t=z;
    }
} ;

class SI : public Base
{
public :
    void simple()
    {
        I = (p*r*t)/100;

        cout <<"\nSimple Interest : " <<I <<endl;
    }
};
class CI : public Base
{
public:
    void compound()
    {
        I = p*pow((1+r/100),t)-p;

        cout <<"\nCompound Interest : " <<I <<endl;
    }
};

int main()
{
    float p,r,t;
    cout <<"Enter Principal Rate And Time : " <<endl;
    cin >>p>>r>>t;

    SI p1;
    CI p2;

    p1.get(p,r,t);
    p1.simple();

    p2.get(p,r,t);
    p2.compound();

    return 0;
}
