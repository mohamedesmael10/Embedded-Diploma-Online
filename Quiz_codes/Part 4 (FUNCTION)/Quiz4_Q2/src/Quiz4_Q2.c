/*
 ============================================================================
 Name        : Quiz4_Q2.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char s1[100],s2[100]; int l ,k ,i; char temp[100];
	printf("Enter The first Array");
	fflush(stdout);
	scanf("%s",s1);
	fflush(stdin);
	l = strlen(s1);
	printf("Enter The Second Array");
	fflush(stdout);
	scanf("%s",s2);
	fflush(stdin);
	k = strlen(s2);
	for (i=0;i<l;i++)
	{
		temp[i]=s1[i];

	}
	for (i=0;i<k;i++)
	{
		s1[i]=s2[i];

	}
	for (i=0;i<l;i++)
	{
		s2[i]=temp[i];

	}
	printf("first Array after swapping\n");

	for (i=0;i<k;i++)
	{
		printf("%c", s1[i]);
	}

	printf("\nSecond Array after swapping\n");
	for (i=0;i<l;i++)
	{
		printf("%c", s2[i]);
	}


	return EXIT_SUCCESS;
}
