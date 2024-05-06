//Write a program to check number is Prime Or Not

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num;
    cout <<"Enter Number : "<<endl;
    cin >>num;

    int pm=0, flag=0;
    pm=num/2;

    for(int i=2; i<=pm; i++)
    {
        if(num%i==0)
        {
            cout <<"Number Is not Prime " <<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout <<"Number Is Prime " <<endl;
    }
    return 0;
}
