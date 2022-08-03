/*
 ============================================================================
 Name        : problem5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x ;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c",&x);
	fflush(stdin);
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		printf("%c is an alphabet", x);
	else
		printf("%c is not an alphabet ", x);
	return EXIT_SUCCESS;
}
