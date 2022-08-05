/*
 ============================================================================
 Name        : problem4.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n1, n2 ,n3 ,i;
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
	printf("\r\nEnter the element to be inserted : ");
	fflush(stdout);
	scanf("%d" ,&n2 );
	fflush(stdin);
	printf("Enter the location : ");
	fflush(stdout);
	scanf("%d" ,&n3 );
	fflush(stdin);
	for(i=n1;i>=n3;i--)
	{
		m[i]=m[i-1];
		fflush(stdin); fflush(stdout);
	}
	m[n3-1]=n2;
	for(i=0;i<n2;i++)
	{
		printf("%d ",m[i]);
	}
	return EXIT_SUCCESS;
}
