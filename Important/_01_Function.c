//
#include<stdio.h>
int sum(int,int);   //function declaration
int main()
{
	int m,n;
	sum(m,n);
	
	return 0;
}

int sum(int,int)   //function definition
{
	int a,b,c;
	printf("Enter two numbers : ");
	scanf("%d%d", &a,&b);
	c=a+b;
	printf("Addition %d", c);
}
