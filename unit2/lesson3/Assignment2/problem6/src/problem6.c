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
	int x ,y ;  int sum=0;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	for(y=0;y<=x;y++)
	sum=sum+y;
	printf("Sum = %d", sum);
	return EXIT_SUCCESS;
}
