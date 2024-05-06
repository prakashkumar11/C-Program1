//

#include<iostream>
#include<conio.h>

using namespace std;

class Test
{
    int num;
public:
    void get()
    {
        cout <<"Enter Number : "<<endl;
        cin >>num;
    }
    void put()
    {
        cout <<"Number : " <<num <<endl;
    }
    friend void operator -(Test T);
};

void operator -(Test T)
{
    T.num = -T.num;
}

int main()
{
    Test ob;
    ob.get();
    ob.put();
    -ob;
    ob.put();

    return 0;
}
