/*
 ============================================================================
 Name        : Quiz4_Q5.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void clear(int num ,int pos)
{
	num &= ~(1 << pos);
	  printf("result = %d" ,num);

}

int main(void) {
	int num , pos ;
	 printf("Input number = ");
	  fflush(stdout);
	  scanf("%d",&num);
	  fflush(stdin);
	  printf("Bit Position = ");
	  	  fflush(stdout);
	  	  scanf("%d",&pos);
	  	  fflush(stdin);
	  	  clear(num,pos);
	return EXIT_SUCCESS;
}
