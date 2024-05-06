// Write a program to calculate addition of 1st digit and last of 5 digit number..
#include<stdio.h>

int main()
{

    // first digit = 10000
    // last digit = 10
    int num, first, last, sum;

    printf("Enter the five numbers : ");
    scanf("%d", num);

    first = num%10000;
    last = num%10;

    printf("Addition of 1st digit and last digit :%d", (first+last));


}