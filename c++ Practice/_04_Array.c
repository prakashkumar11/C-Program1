// Add arrays
#include<stdio.h>

int main()
{
    // a[5]=10+20+30+40+50--->150

    int arr[5], sum=0, i;
    printf("Enter array element : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sum of array elements : ");
    for(i=0; i<5; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d", sum);

    return 0;
}