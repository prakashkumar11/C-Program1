#include<stdio.h>
int main()
{
    // Operator is perform operations on variable and valuues

    // -------------------------------------+ Operator---------------------------------
    // int x=10, y=20;
    // printf("Result is : %d\n", x+y);

    // int sum1 = 100+50; //100+50=150
    // int sum2 = sum1+250;//150+250=400
    // int sum3 = sum2+sum2;//400+400
    // printf(" Result of sum1 is : %d\n Result of sum2 is : %d\n Result of sum3 is : %d\n", sum1, sum2, sum3);

    // --------------------------1.Arithmetic Operator--------------------------------
    // Arithmetic operators are used to perform common mathematical operations.
    // int x=1;
    // int y=2;
    // printf("Addition of x + y is :%d",x+y);
    // printf("Subtraction of x - y is :%d", x-y);
    // printf("Multiplication of x * y is : %d", x*y);
    // printf("Division of x / y is : %d", x/y);
    // printf("Modulus of x % y is : %d", x%y);
    // printf("Increment of x : %d\n", ++x);
    // printf("Decrement of y : %d\n", --y);

    // ----------------------------2.Assignment operator-----------------------------
    // Assignment operators are used to assign values to variables.
    // Example:we use the assignment operator (=) to assign the value 10 to a variable called x

    // int x=10;
    // printf("%d", x);

    // The addition assignment operator (+=) adds a value to a variable:
    // int x=10;
    // x+=5;   //output x=10 => 10+=5=>10+5=15
    // printf("Sum : %d", x);

    // int x=10;
    // x-=5;
    // printf("Sub of x : %d", x);

    // int x = 20;
    // x*=5;
    // printf("Multi of x : %d", x);

    // int x = 30;
    // x/=5;
    // printf("Division of x : %d", x);

    // int x=32;
    // x%=5;
    // printf("Modulus of x : %d", x);

    // int x = 3;
    // x&=1;
    // printf("Bitwise And (&) : %d", x);

    // int x = 6;
    // x|=10;
    // printf("Bitwis OR (|) : %d", x);

//    ----------------------------------------Comparison operator-------------------------
    // Comparison operators are used to compare two values.
    // Note: The return value of a comparison is either true (1) or false (0).In the following example, we use the greater than operator (>) to find out if 5 is greater than 3:

    // int x = 5;
    // int y = 3;
    // printf("Greater than x > y : %d", x>y);
    // printf("Less than  x < y : %d", x<y);
    // printf("Greater than equal to : %d", x>=y);
    // printf("Less than equal to : %d", x<=y);
    // printf("Equal to x==y : %d", x==y);
    // printf("Not equal to : %d", x!=y);

// -----------------------------------------Logical Operator-------------------------------
    // Logical operators are used to determine the logic between variables or values:
    // 1.Logical AND(&&)==>Returns true if both statements are true
    // Example=>
    int x = 5;
    int y = 3;
    // printf("%d", x > 3 && x < 10);
    // printf("%d", y > 3 && y < 10);

    // 2. Logical OR(||)==>Returns true if one of the statements is true
    // printf("%d", x > 3 || x < 4);

    // 3. Logical NOT(!)==>	Reverse the result, returns false if the result is true
    // printf("%d", !(x<5 && x < 10));

// ------------------------------------------SizeOf operator-----------------------
// The memory size (in bytes) of a data type or a variable can be found with the sizeof operator:
// Example-->
int myint;
float myFloat;
char mychar;
double mydouble;

printf("%lu\n", sizeof(myint));
printf("%lu\n", sizeof(myFloat));
printf("%lu\n", sizeof(mychar));
printf("%lu\n", sizeof(mydouble));






















    return 0;
}