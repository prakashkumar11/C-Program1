#include<iostream>
using namespace std;

// odd number to given range
void givenOddRange(int num)
{
    for(int i=1; i<=num; i=i+2) {
        cout <<i <<" ";
    }
}

// Even number to given range
void givenEvenRange(int num) {
    for(int i=0; i<=num; i=i+2) {
        cout <<i <<" ";
    }
}

// odd or Even number given range
void givenRange(int num)
{
    int sum=0;
    if(num%2==0)
    {
        for(int i=0; i<=num; i+=2)
            sum+=i;
        cout <<sum;
    }
    else
    {
        for(int i=1; i<=num; i+=2)
            sum+=i;
        cout <<sum;
    }

}

int main()
{
    int num;
    cout <<"Enter number to add odd or even number ";
    cin >>num;
    givenRange(num);

    return 0;
}