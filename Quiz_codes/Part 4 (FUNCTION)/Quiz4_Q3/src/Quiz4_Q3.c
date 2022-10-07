/*
  ============================================================================
 Name        : Quiz4_Q3.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse(char *str)
{ char rev[100]; int y,i ; int c=0;
    y = strlen(str);
		for(i=y;i>=0;i--){
			rev[c]=str[i];
			c++;
		}
		rev[y+1]='\0';
		printf("output: %s",&rev[1]);
}

int main(void) {
	char str[100];
		printf("input: ");
		fflush(stdout);
		scanf("%s",str);
		fflush(stdin);

Reverse(str);
	return EXIT_SUCCESS;
}
