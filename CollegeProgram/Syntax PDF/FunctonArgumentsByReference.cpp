
// Function Arguments Pass By Reference...

#include<iostream>
#include<conio.h>

using namespace std;

class total
{
    int num;
public :
    void getdata(void);
    void putdata(void);
    void add(total&, total&);  // &-reference
};

void total :: getdata(void)
{
    cout <<"Enter Numbers... ";
    cin >> num ;
}

void total :: putdata(void)
{
    cout << num << endl ;
}

void total :: add(total &x, total &y) // x and y are objects
{
    x.num = 12;
    y.num = 15;

    num = x.num + y.num ;
}

int main()
{
    total a, b, result;

    a.getdata();
    b.getdata();

    result.add(a,b);

    cout <<"Value Of A : ";
    a.putdata();

    cout <<"Value Of B : ";
    b.putdata();

    cout <<"Addition : ";
    result.putdata();

    return 0;
}
