//Write a program to overload + binary Operator

#include<iostream>
using namespace std;

class Test
{
protected:
    int num;
public:
    void get()
    {
        cout <<"Enter a number : "<<endl;
        cin >>num;
    }
    void put()
    {
        cout <<"Number : " <<num <<endl;
    }
    int operator +(Test ob2)
    {
        Test ob3;
        ob3.num = num+ob2.num;
        return (ob3.num);
    }
};

int main()
{
    Test T1, T2, T3;
    T1.get();
    T1.put();
    T2.get();
    T2.put();

    T3=T1+T2;

    T3.put();

    return 0;
}
