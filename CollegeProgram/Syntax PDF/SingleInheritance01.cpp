//********************* Single Inheritance Example *******************
#include<iostream>
#include<conio.h>

using namespace std;

class A
{
    int m;
public:
    void getdata_m(void);
    int retm(void);
};

class B : public A
{
    int n, sum;
public :
    void getdata_n(void);
    int add(void);
    void display(void);
};

void A :: getdata_m(void)
{
    cout <<"Enter Value Of M : ";
    cin >> m;
}
int A :: retm(void)
{
    return m;
}

void B :: getdata_n(void)
{
    cout <<"Enter Value Of N : ";
    cin >> n;
}

int B :: add(void)
{
    sum = retm + n;
    return (sum);
}

void B :: display(void)
{
    cout <<"Value Of M : " << retm << endl;
    cout <<"Value Of N : " << n << endl;
    cout <<"Addition   : " << sum << endl;
}

int main()
{
    B p1;
    p1.getdata_m();
    p1.getdata_n();
    p1.add();
    p1.display();

    return 0;
}
