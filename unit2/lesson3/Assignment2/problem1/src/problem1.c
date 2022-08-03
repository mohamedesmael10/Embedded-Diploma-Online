/*
 ============================================================================
 Name        : problem1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x ;
	printf("Enter an integer you want to check:");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	if (x==0)
		printf("%d not odd or even.",x);
	else if(x%2==1)
		printf("%d is odd.",x);
	else if(x%2==0)
		printf("%d is even.",x);

	return EXIT_SUCCESS;
}
