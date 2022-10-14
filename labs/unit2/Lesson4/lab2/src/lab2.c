/*
 ============================================================================
 Name        : lab2.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate Polynomial Value for a Set of Inputs
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float y, x[5]={5,16,22,3.5,15};
	int i;
	for(i=0;i<5;i++)
	{
		y = 5*x[i]*(x[i]+3)*x[i]+2;
		printf("y(%f) = %f\r\n",x[i],y);
	}
	return EXIT_SUCCESS;
}
