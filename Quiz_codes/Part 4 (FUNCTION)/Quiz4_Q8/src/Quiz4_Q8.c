/*
 ============================================================================
 Name        : Quiz4_Q8.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int last (int size,int n1[])
{
	int n,i; int c=1;
	printf("Enter the The number you want to find its last occurrence: ");
	fflush(stdout);
	scanf("%d",&n);
	for(i=size;i>0;i--)
	{
		c=i;

		if(n1[i]==n)
		{
			return c ;
		}

	}
	return -1;
}


int main(void) {
	int n1[100] ; int size,i;
	printf("Enter the size of array: ");
	fflush(stdout);
	scanf("%d",&size );
	fflush(stdin);
	printf("\nEnter the elements: \n");
	for(i=0;i<size;i++)
	{
		printf("Enter the element %d =",i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%d",&n1[i] );
	}
	printf("result (starting from 0) = %d",last(size,n1));

}

