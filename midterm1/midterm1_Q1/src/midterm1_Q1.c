/*
 ============================================================================
 Name        : midterm1_Q1.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum(int num)
{
	int sum =0 , rem;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("output:%d",sum);
}

int main(void) {
	int num;
	printf("input:");
	fflush(stdout);
	scanf("%d",&num);
	fflush(stdin);
	sum(num);
	return EXIT_SUCCESS;
}
