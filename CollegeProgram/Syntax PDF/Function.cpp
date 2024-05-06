#include<iostream>

using namespace std;

int add(int, int);

int main()
{
    int a,b, sum;
    cout <<"Enter Numbers...";
    cin >>a >>b ;
    sum=add(a,b);
    cout <<"Total : " <<sum;
    return 0;
}

int add(int x, int y)
{
    int t;
    t = x+y;
    return (t);
}
