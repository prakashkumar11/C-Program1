//Pointer

#include<stdio.h>

int main()
{
	int a=10, *ptr, **ptp;
	ptr=&a;   ptp=&ptr;
	
	printf("%d\n", a); //10
	printf("%d\n", &a); //address of a
	printf("%d\n", ptr);//address of a
	printf("%d\n", *ptr);//10
	printf("%d\n", &ptr);//address of ptr(pointer variable address)
	
	printf("....Pointer To Pointer....\n");
	//Pointer To Pointer
	printf("%d\n", ptp);
	printf("%d\n", *ptp);
	printf("%d\n", **ptp);
	printf("%d\n", &ptp);
	
	return 0;
}
