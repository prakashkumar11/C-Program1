#include<stdio.h>

int main()
{
    int radius;
    printf("Enter radius : ");
    scanf("%d", &radius);

    if(radius >= 0)
    {
        float area = 3.14*radius*radius;
        float circumf= 2*3.14*radius;

        printf("Area : %d\n", area);
        printf("Circumfrence : %d\n", circumf);
    }
    else{
        printf("invalid number...");
    }

    return 0;
}