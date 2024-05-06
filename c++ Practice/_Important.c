// Add two numbers
#include<stdio.h>
int main()
{
    // int a,b,c;
    // printf("Enter 1st number : ");
    // scanf("%d", &a);
    // printf("Enter 2nd number : ");
    // scanf("%d", &b);

    // // c = a+b;

    // printf("Add of a and b is :%d", a+b);

    // Swap two numbers
    // a=10  b=20 input
    // a=20  b=10 output

    int a,b, temp;
    printf("Enter two numbers : ");
    scanf("%d%d", &a,&b);

    temp=a;
    a=b;
    b=temp;

    printf("%d %d ",a,b);


}