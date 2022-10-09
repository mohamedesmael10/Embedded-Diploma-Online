/*
 ============================================================================
 Name        : midterm1_Q10.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void count (int num)
{
	int b,i,c=0,y=0;

	for (i=31;i>=0;i--)
	{
		b=num>>i;
		if(b&1)
		{c++;}
		else
		{
			if(c>y)
			{
				y=c ;
				c=0;
			}
			else
			{
				c=0;
			}
}
}
	printf("The max number of ones between two zeros is %d.", y);

}

int main(void) {
	int num;
	printf("Enter the number: ");
	fflush(stdout);
	scanf("%d", &num);
	fflush(stdin);
	count(num);
	return EXIT_SUCCESS;
}
