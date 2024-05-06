#include<stdio.h>

int main()
{
    int a=10;

    int *p=&a;
    printf("%d\n", *p); //10
    printf("%d\n", p); //address
    printf("%d\n", &a);//address
    printf("%d\n", a);//10
    printf("%d\n", &p);//address


}