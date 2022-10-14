/*
 ============================================================================
 Name        : lab2.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description :Comparing Three Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	printf("Please Enter 3 values: ");
		fflush(stdout);
		scanf("%d %d %d",&a,&b,&c);
		fflush(stdin);

	   if (a>b && a>c)
	      printf("%d is the largest num",a);
	   else if (b>a && b>c)
	      printf("%d is the largest num",b);
	   else if (c>a && c>b )
	      printf("%d is the largest num",c);
	   else
	      printf("two values or more are equal");
	return EXIT_SUCCESS;
}
