// Program to find the average of n numbers using arrays
#include<stdio.h>

int main()
{
    int arr[5];

    printf("Enter array elements : ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray Elements : ");
    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}