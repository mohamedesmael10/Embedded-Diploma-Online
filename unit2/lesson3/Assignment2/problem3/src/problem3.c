/*
 ============================================================================
 Name        : problem3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x , y , z ;
	printf("Enter three numbers:");
	fflush(stdout);
	scanf("%f %f %f", &x ,&y,&z);
	fflush(stdin);
	if (x >= y) {
		if (x > z)
			printf("Largest number = %.2f", x);
		else if  (z >x)
			printf("Largest number = %.2f", z);
		else
			printf("The numbers are equal.");

	}
	else {
		if (y >= z)
			printf("Largest number = %.2f", y);
		else if (z > y)
			printf("Largest number = %.2f", z);
		else
			printf("The numbers are equal.");
	}
}
