//Ponter in c
#include<stdio.h>

int main()
{
	int *p, *q, r, a, b;
	printf("Enter two numbers...");
	scanf("%d%d", &a, &b);
	p=&a;
	q=&b;
	
	r=*p+*q;
	printf("Addition : %d", r);
	
	return 0;
}
