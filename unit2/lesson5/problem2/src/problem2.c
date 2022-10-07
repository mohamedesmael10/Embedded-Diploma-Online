/*
 ============================================================================
 Name        : problem2.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{

if(n!=1)
 n= n*factorial(n-1);
return n;
}

int main(void) {
	int x;
	printf("Enter an positive integer:");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	printf("Factorial of %d = %d" ,x,factorial(x));
	return EXIT_SUCCESS;
}
