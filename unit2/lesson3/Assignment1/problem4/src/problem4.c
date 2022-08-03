/*
 ============================================================================
 Name        : problem4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x , y ;
		printf("Enter two numbers: ");
		fflush(stdin);   fflush(stdout);
		scanf("%f %f", &x , &y);
		fflush(stdin);   fflush(stdout);
		printf("Product: %f" , x*y);
		return EXIT_SUCCESS;
}
