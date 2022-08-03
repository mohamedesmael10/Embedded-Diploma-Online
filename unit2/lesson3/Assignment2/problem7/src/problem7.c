/*
 ============================================================================
 Name        : problem7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x ,y ;  int p=1;
		printf("Enter an integer:");
		fflush(stdout);
		scanf("%d",&x);
		fflush(stdin);
		if(x==0)
			printf("Factorial = 1");
		else if (x<0)
			printf("Error!!! Factorial of negative number doesn't exist");
		else {
		for(y=x;y>=1;y--)
		p=p*y;
		printf("Factorial = %d", p);
		return EXIT_SUCCESS;
		}
}
