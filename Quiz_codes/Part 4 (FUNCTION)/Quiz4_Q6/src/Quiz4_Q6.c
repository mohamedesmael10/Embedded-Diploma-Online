/*
 ============================================================================
 Name        : Quiz4_Q6.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
 int num(int n)
 { int i ,b;
  printf("%d binary representation is :",n);
	 for(i=31;i>=0;i--)
	 {
		b=n>>i;
		if((b&1)==1)
			 printf("1");
		else
			printf("0");
	 }
b=n>>3;
if((b&1)==1)
 return 1;
		else
		 return 0;

 }


int main(void) {
	 int n;
	 printf("Enter an integer num:");
	 		fflush(stdout);
	 		scanf("%d",&n);
	 		fflush(stdin);
	 		 printf("\nThe 4th least bit is %d", num(n));
	return EXIT_SUCCESS;
}
