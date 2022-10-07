/*
 ============================================================================
 Name        : Quiz4_Q7.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int check(int n)
{
    int m=n/3;
	if((n%3 == 0 && m%3 == 0) || n==3)
	return 0;

	else
      return 1;

}

int main(void) {
	int n;
	printf("Enter the number:");
	fflush(stdout);
	 scanf("%d",&n );
	 fflush(stdin);
	 printf("%d",check(n));
	return EXIT_SUCCESS;
}
