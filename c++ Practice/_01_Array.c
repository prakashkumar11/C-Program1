// Array Example--->
// Syntax--->
        // data_type variable_name [size of array]; []subscript operator
#include<stdio.h>

int main()
{
    int arr[5], i;
    // input array
    printf("Enter element in array...");
    for(i=0; i<=4; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Print array
    printf("Array Elements ");
    for(i=0; i<=4; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}