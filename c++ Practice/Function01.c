//
#include<stdio.h>

void sum(int,int);        //function declaration

int main()
{
    int m,n;
    sum(m,n);             //function calling
}
void sum(int,int)       //function definition
{
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d%d", &a,&b);
    c=a+b;
    printf("Addition : %d", c);
}
