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
	float x ;
		printf("Enter a number:");
		fflush(stdout);
		scanf("%f",&x);
		fflush(stdin);
		if (x>0)
			printf("%.2f is positive.",x);
		else if(x<0)
			printf("%.2f is negative .",x);
		else if(x==0)
			printf("You entered zero.");
}
