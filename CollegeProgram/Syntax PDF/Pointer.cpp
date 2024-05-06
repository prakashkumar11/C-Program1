#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    *p = 20;

    cout <<"Address Of a :" << p <<endl;
    cout <<"Value Of a : " << *p <<endl;

    return 0 ;
}
