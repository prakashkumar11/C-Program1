#include<iostream>

using namespace std;

class total
{
    int num;
public :
    void getdata(void);
    void putdata(void);
    void add(total, total);
};

void total :: getdata(void)
{
    cout <<"Enter Any Number... ";
    cin >> num;
}
void total :: putdata(void)
{
    cout << num << endl ;
}

void total :: add(total x, total y) // x and y are objects
{
    num = x.num + y.num ;
}

int main()
{
    total p, q, result;

    p.getdata();
    q.getdata();
    cout <<"Value Of A : ";
    p.putdata();
    cout <<"Value Of B : ";
    q.putdata();
    result.add(p,q); // Passing Objects
    cout <<"Addition : ";
    result.putdata();

    return 0;
}
