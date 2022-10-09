/*
 ============================================================================
 Name        : midterm1_Q7.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int c=0;
int sum(int num)
{

	if (num>=0)
		{

		c=c+num;
		num--;
		sum(num);
		}

return c;
}

int main(void) {

	printf("The sum between 0 & 100 is= %d",sum(100));


	return EXIT_SUCCESS;
}
