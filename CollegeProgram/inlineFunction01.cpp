
#include<iostream>
#include<conio.h>

using namespace std;

inline int fun(int a, int b)
{
    return (a>b) ? a:b;
}

int main()
{
    cout <<"Maximum : " <<fun(20,10);
}
