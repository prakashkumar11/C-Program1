//Table

#include<stdio.h>

int main()
{
	int i, num;
	printf("Enter any numbers : ");
	scanf("%d", &num);
	
	for(i=1; i<=10; i++)
	{
		printf("%d\n", num*i);
	}
	
	return 0;
}
