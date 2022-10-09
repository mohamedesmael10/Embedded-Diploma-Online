/*
 ============================================================================
 Name        : midterm1_Q5.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void num(int n)
 { int i ,b , r=0;
	 for(i=31;i>=0;i--)
	 {
		b=n>>i;
		if((b&1)==1)
			r++;
	 }
	 printf("The number of ones is %d",r );
 }


int main(void) {
	 int n;
	 printf("Enter an integer num:");
	 		fflush(stdout);
	 		scanf("%d",&n);
	 		fflush(stdin);
	 		num(n);

	return EXIT_SUCCESS;
}
