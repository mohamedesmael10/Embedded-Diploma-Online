/*
 ============================================================================
 Name        : lab1.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate Circle Area or Circumference
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c; int i; double r;
	printf("Enter circle radius: ");
	fflush(stdout);
	scanf("%d",&i);
	fflush(stdin);
	printf("Enter your choice (a to print the area , c to print circumference): " );
	fflush(stdout);
	scanf("%c",&c);
	fflush(stdin);
	if (c=='a')
	{
	r =3.14*i*i	;
	printf("area is: %f",r);
	}
	else if (c=='c')
		{
		 r =2*3.14*i	;
		printf("area is: %f",r);
		}
	else
		printf("you Entered the wrong character , please Enter a or c ");
	return EXIT_SUCCESS;
}
