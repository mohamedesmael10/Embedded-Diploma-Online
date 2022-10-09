/*
 ============================================================================
 Name        : midterm1_Q4.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(int num)
{ int reverse=0,temp;

	while (num!=0)
	{

		temp =num%10;

		reverse=reverse*10 + temp;

		num =num/10;

	}

	printf("the reverse is %d", reverse);
}

int main(void) {
	int num;
	printf("input:");
	fflush(stdout);
	scanf("%d",&num);
	fflush(stdin);
	reverse(num);
	return EXIT_SUCCESS;
}
