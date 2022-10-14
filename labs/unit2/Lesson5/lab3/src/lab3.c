/*
 ============================================================================
 Name        : lab3.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : inverted right angle triangle
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i ,j=0,n;
	for (i=9;i>=0;i--)
	{
		for (n=0;n<=i;n++)
		{
			printf("%d ",n+j);
		}
		printf("\n");
		j++;
	}

	return EXIT_SUCCESS;
}
