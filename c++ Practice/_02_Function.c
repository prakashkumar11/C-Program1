// 
#include<stdio.h>

int sum();      //function declaration...

int main()
{
    int result;
    result=sum();                   //function calling
    printf("Addition %d", result);
}

int sum()      //function definition
{
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d%d", &a,&b);
    c=a+b;
    return c;
}