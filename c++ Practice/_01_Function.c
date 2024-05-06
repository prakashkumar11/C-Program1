
#include<stdio.h>

void sum();     //Function Declaration
int main()
{
    sum();     //Function calling
}

void sum()    //function definition
{
    int a, b, c;
    printf("Enter two numbers : ");
    scanf("%d%d", &a,&b);
    c = a+b;
    printf("Addition : %d", c);
}