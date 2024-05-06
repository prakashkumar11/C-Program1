// 
#include<stdio.h>

int sum(int,int);  //function declaration
int main()
{
    int m,n,result;
    result=sum(m,n);
    printf("Addition : %d", result);

    return 0;

}
int sum(int,int)  //function definition
{
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d%d", &a,&b);
    c=a+b;
    return c;
}