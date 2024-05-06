#include <stdio.h>
 
/* function declaration */
void func(void);
 
static int count = 1; /* global variable */
 
main() {

   while(count--) {  //count 1--==>0
      func();
   }
	
   return 0;
}

/* function definition */
void func( void ) {

   static int i = 0; /* local static variable */ //i=1
   i++; //0++=1

   printf("i is %d and count is %d\n", i, count); //i print 1 count print 0
}
