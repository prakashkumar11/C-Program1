

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
    friend Test operator --(Test t1);
};

    Test operator --(Test t1)
{
    --t1.num;
}

int main()
{
    Test ob, ob1;
    ob.get();
    ob.put();

    --ob;

    ob.put();

    return 0;
}
