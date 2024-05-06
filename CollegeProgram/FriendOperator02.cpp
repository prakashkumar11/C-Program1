
#include<iostream>
#include<conio.h>

using namespace std;

class Test
{
protected:
    int num;
public:
    void get()
    {
        cout <<"Enter Number : " <<endl;
        cin >>num;
    }
    void put()
    {
        cout <<"Number : " <<num <<endl;
    }
    friend Test operator -(Test T, Test T1);
};

Test operator -(Test T, Test T1)
{
    T.num = T.num-T1.num;
    return(T);
}

int main()
{
    Test p1, p2, p3;
    p1.get();
    p1.put();
    p2.get();
    p2.put();
    p3=p1-p2;
    p3.put();
    return 0;
}
