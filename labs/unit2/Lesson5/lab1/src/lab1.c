/*
 ============================================================================
 Name        : lab1.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate the Factorial
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int x)
{
	int n=1;
	while(x!=0)
		{ n=n*x;
		x--;
		}
	return n;
	x--;
}
int main(void) {
	printf("factorial(%d)= %d \n",10,factorial(10));
	printf("factorial(%d)= %d \n",0,factorial(0));
	printf("factorial(%d)= %d \n",5,factorial(5));
	return EXIT_SUCCESS;
}
