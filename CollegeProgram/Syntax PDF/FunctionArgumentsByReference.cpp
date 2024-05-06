#include<iostream>
#include<conio.h>

using namespace std;

class total
{
    int num;
public :
    void getdata(void);
    void putdata(void);
    void sub(total, total);
};

void total :: getdata(void)
{
    cout <<"Enter Number... ";
    cin >> num;
}

void total :: putdata(void)
{
    cout << num << endl;
}

void total :: sub(total x, total y)
{
    num = x.num - y.num ;
}

int main()
{
    total p, q, result;
    p.getdata();
    q.getdata();

    cout << "Value Of P : ";
    p.putdata();
    cout << "Value Of Q : ";
    q.putdata();

    result.sub(p,q);
    cout << "Subtraction : ";
    result.putdata();

    return 0 ;
}
