/*
 ============================================================================
 Name        : lab3.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate the Minimum of Two Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i , j , r;
	printf("Please Enter 2 numbers: ");
		fflush(stdout);
		scanf("%d %d",&i ,&j);
		fflush(stdin);
		r = (i>j) ? j : i ;
		printf("the minimum is = %d",r);
	return EXIT_SUCCESS;
}
