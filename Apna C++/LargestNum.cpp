#include<iostream>
using namespace std;

void largeNumber(int a, int b, int c) {
    if(a>b)
        if(a<c)
            cout <<a;
        else 
            cout <<c;
    else 
        if(b<c)
            cout <<b;
        else
            cout <<a;
}

int main()
{
    largeNumber(1, 20, 5);

    return 0;
}