/*
 ============================================================================
 Name        : problem3.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : problem3.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[100], rev[100]; int y,i ; int c=0;
		printf("Enter a string:");
		fflush(stdout);
		scanf("%s",str);
		fflush(stdin);
		y = strlen(str);
		for(i=y;i>=0;i--){
			rev[c]=str[i];
			c++;
		}
		rev[y+1]='\0';
		printf("Reverse string is :");
		for(i=1;i<=y;i++)
			printf("%c" ,rev[i]);

	return EXIT_SUCCESS;
}
