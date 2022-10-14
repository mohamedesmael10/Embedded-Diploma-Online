/*
 ============================================================================
 Name        : lab4.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate the Summation of values between 1 and 99
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n=0 ,i;
	for(i=1;i<=99;i++)
	{
		n=n+i;
	}
	printf("the Summation of values between 1 and 99 is %d",n);
	return EXIT_SUCCESS;
}
