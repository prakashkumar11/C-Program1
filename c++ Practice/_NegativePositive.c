// Write a program to calculate negative into positive number

#include<stdio.h>

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", num);

    if(num < 0)
    {
        num = num%-1;
    }
    printf("Positive number : %d", num);

    return 0;
}