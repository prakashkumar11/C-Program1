// Greatest Three Numbers...

#include<stdio.h>

int main()
{
    // if condition

    // int password;

    // printf("Enter Password : ");
    // scanf("%d", &password);

    // if(password==12345)
    // {
    //     printf("Welcome\n");
    // }
    // printf("Main function ended");

    // if else statement

    // int age;
    // printf("Enter age : ");
    // scanf("%d", &age);

    // if(age >= 18)
    // {
    //     printf("Eligible for vote");
    // }
    // else
    // {
    //     printf("You are kid....");
    // }

    // int a, b, c;
    // int choice;
    // printf("Enter two numbers : ");
    // scanf("%d%d", &a, &b);

    // printf("Enter choice : ");
    // scanf("%d", &choice);

    // switch(choice)
    // {
    //     case 1 : c = a+b;
    //             printf("%d", c);
    //     break;

    //     case 2 : c = a-b;
    //             printf("%d", c);
    //     break;
    //     case 3 : c = a*b;
    //             printf("%d", c);
    //     break;

    //     default : 
    //             printf("Invalid choice...");
    // }

    // Loops
    // While Loop

    // int i=1;

    // while(i<=20)
    // {
    //     printf("%d ", i);
    //     ++i;
    // }

    // do...while Loop
    // int i=1;

    // do{
    //     printf("%d ", i);// 1 2...10
    //     ++i;            // 2 3  11
    // }while(i<=10);      //2<=20 true   11 false
    
    // for Loop
    // for(int i=1; i<=10; i++) //1 1<=10 printf 1 -->2
    // {
    //     printf("%d ", i);
    // }
            // reverse
        // for(int i=10; i>=1; i--)
        // {
        //     printf("%d ", i);
        // }

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}