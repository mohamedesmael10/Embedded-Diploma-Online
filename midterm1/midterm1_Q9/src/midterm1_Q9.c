/*
 ============================================================================
 Name        : midterm1_Q9.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(int size,char array[])
{
	 int i;
	printf("String after reversed: ");
	  	fflush(stdout);
	  	for(i=size-1;i>=0;i--)
		{
			if(array[i]==' ')
			{
				array[i]='\0';
				printf("%s ",&array[i]+1);
			}
		}
		printf("%s",array);



}

int main()
{
	char array[100]; int size;
  	printf("Enter a string: ");
  	fflush(stdout);
  	gets(array);
  	size = strlen(array);
  	reverse(size,array);
 	return EXIT_SUCCESS;
}
