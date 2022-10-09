/*
 ============================================================================
 Name        : midterm1_Q8.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(int size)
{
	int i,array[100];
	for(i=0;i<size;i++)
	{
		printf("Enter the Element %d:",i+1);
		fflush(stdout);
		scanf("%d",&array[i]);
		fflush(stdin);

	}
	printf("The Elements after reversed:");
	for(i=size-1;i>=0;i--)
	{
		printf(" %d",array[i]);
		fflush(stdout);

}
}
int main(void) {

	int size;
		printf("Enter the size of array:");
		fflush(stdout);
		scanf("%d",&size);
		fflush(stdin);
		reverse(size);

	return EXIT_SUCCESS;
}
