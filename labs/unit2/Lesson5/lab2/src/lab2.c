/*
 ============================================================================
 Name        : lab2.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate the Minimum Value of any Given Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int calacmin(int values[],int n)
{int i,c=values[0];
	for(i=0;i<n;i++)
	{
		if (values[i]<c)
		{
			c=values[i];
		}
	}
	return c;
}
int main(void) {
	int x[6]={5,6,7,8,9,1};
	int y[10]={51,26,27,89,39,55,89,54,34,22};
	int z[2]={5,61};
	printf("the minimum of x is %d \n",calacmin(x,6));
	printf("the minimum of y is %d \n",calacmin(y,10));
	printf("the minimum of z is %d \n",calacmin(z,2));
	return EXIT_SUCCESS;
}
