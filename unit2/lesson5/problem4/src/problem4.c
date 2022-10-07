/*
 ============================================================================
 Name        : problem4.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int calu(int base,int power)
{ int i;
for (i=1;i<=power;i++)
{
	return base*calu(base,power-1);
}

	return 1 ;


}

int main(void) {
	int n1 ,n2;
	printf("Enter the base: ");
	 fflush(stdout); fflush(stdin);
	scanf("%d",&n1 );
	printf("Enter power number(positive integer): ");
	 fflush(stdout); fflush(stdin);
	scanf("%d",&n2 );
	printf("%d^%d=%d",n1,n2,calu(n1,n2));
	return EXIT_SUCCESS;
}
