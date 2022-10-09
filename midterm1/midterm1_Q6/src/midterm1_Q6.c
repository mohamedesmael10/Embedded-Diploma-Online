/*
 ============================================================================
 Name        : midterm1_Q6.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void unique(int size)
{int i,j,array[100];
for(i=0;i<size;i++)
{
	printf("Enter the Element %d:",i+1);
	fflush(stdout);
	scanf("%d",&array[i]);
	fflush(stdin);
}
for(i=0;i<size;i++)
{
	for(j=0;j<size;j++)
	{
		if(array[i]==array[j] && i!=j)
			break;
	}
	if(j==size )
	{
		printf("The unique Element in array is %d",array[i]);

	}
}

}

int main(void) {
	int size;
	printf("Enter the size of array:");
	fflush(stdout);
	scanf("%d",&size);
	fflush(stdin);
	unique(size);
	return EXIT_SUCCESS;
}
