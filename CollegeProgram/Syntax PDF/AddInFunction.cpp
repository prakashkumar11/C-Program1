#include<iostream>

using namespace std;

float add(float, float);

int main()
{
    float a, b, sum;
    cout <<"Enter Numbers...";
    cin >>a >>b ;
    sum=add(a,b);
    cout <<"Result :"<< sum;

    return 0 ;
}
float add(float x, float y)
{
    int t;

    t=x+y;
    return(t);
}
