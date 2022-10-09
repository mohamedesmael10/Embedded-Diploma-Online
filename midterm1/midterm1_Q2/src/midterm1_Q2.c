/*
 ============================================================================
 Name        : midterm1_Q2.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void root(int num)
{

	 printf("output:%.3f",sqrt(num));
}

int main(void) {
		int num;
		printf("input:");
		fflush(stdout);
		scanf("%d",&num);
		fflush(stdin);
		root(num);
	return EXIT_SUCCESS;
}
