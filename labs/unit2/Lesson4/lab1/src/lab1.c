/*
 ============================================================================
 Name        : lab1.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Store and Print 10 Students Degrees
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float f [100]; int i;
	for(i=0;i<=9;i++)
	{
		printf("Enter student %d degree: ",i+1);
		fflush(stdout);
		scanf("%f",&f[i]);
		fflush(stdin);
	}
	for(i=0;i<=9;i++)
	{
		printf("Student %d degree is %f\n",i+1,f[i]);
		fflush(stdout);
	}
	return EXIT_SUCCESS;
}
