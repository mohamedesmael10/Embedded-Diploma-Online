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
	printf("ASCII value of %c = %d"  , x , x );

}
