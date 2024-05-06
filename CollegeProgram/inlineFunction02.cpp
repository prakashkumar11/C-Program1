//Minimum Number using inline function...

#include<iostream>
#include<conio.h>

using namespace std;

inline fun(int a, int b)
{
    return (a<b) ? a:b;
}

int main()
{
    cout <<"Minimum Number : " <<fun(20,10);
}
