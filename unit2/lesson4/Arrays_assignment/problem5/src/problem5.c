/*
 ============================================================================
 Name        : problem5.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n1, n2 ,i;
	printf("Enter no of elements ");
	fflush(stdout);
	scanf("%d" ,&n1 );
	fflush(stdin);
	int m[n1];
	for(i=0;i<n1;i++)
	{
		scanf("%d",&m[i]);
		fflush(stdin); fflush(stdout);
	}
	for(i=0;i<n1;i++)
	{
		printf("%d ",m[i]);
	}
	printf("\r\nEnter the elements to be searched : ");
	fflush(stdout);
	scanf("%d" ,&n2 );
	fflush(stdin);
	for(i=0;i<n1;i++)
	{
		if(m[i]==n2)
		{
			printf("Number found at the location %d",i+1);
			break;
		}
	}
	return EXIT_SUCCESS;
}
