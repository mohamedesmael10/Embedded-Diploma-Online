/*
 ============================================================================
 Name        : lab3.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate and Print the Transpose of 3x3 Matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x[3][3],y[3][3]; int i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("Enter the item(%d,%d): \n",i,j);
			fflush(stdin);
			scanf("%f",&x[i][j]);
			fflush(stdin);
		}

	}
	printf("the matrix is \n");
	fflush(stdin);
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{

			printf("%f\t",x[i][j]);
			fflush(stdin);
		}
		printf("\n");
		fflush(stdin);
	}
	printf("the transpose is \n");
	fflush(stdin);
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			y[i][j]=x[j][i];

		}

	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%f\t",y[i][j]);
			fflush(stdin);
		}
		printf("\n");
		fflush(stdin);
	}
	return EXIT_SUCCESS;
}
