
//Template Function...
#include<iostream>
#include<conio.h>

using namespace std;

template <class T>  //Function template
void show(T a, T b)
{
    cout <<"A : " <<a <<ends <<"B : " <<b <<endl;
}

int main()
{
    int p=10, q=20;
    char x='A', y='B';
    float m=12.21, n=23.2;
    show(p,q);
    show(x,y);
    show(m,n);

    return 0;
}
