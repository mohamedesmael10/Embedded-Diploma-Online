/*
 ============================================================================
 Name        : problem2.c
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
		printf("Enter an alphabet:");
		fflush(stdout);
		scanf("%c",&x);
		fflush(stdin);
		if (x=='A' || x=='E'|| x=='I'|| x=='O'|| x=='U'||x=='a'|| x=='e' ||x=='i'||x=='o'||x=='u')
			printf("%c is a vowel.",x);
		else
			printf("%c is a consonant.",x);

	return EXIT_SUCCESS;
}
