#include<stdio.h>

int main()
{
    int arr[2][2], i, j;
    printf("Enter element in array...");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Array element in matrix form \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}