/*
 ============================================================================
 Name        : problem6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x , y , z;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&y);
	fflush(stdin);
	z=x;
	x=y;
	y=z;
	printf("\r\nAfter swapping, value of a = %.2f",x);
	fflush(stdout);
	printf("\r\nAfter swapping, value of b = %.2f",y);

	return EXIT_SUCCESS;
}
