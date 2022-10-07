/*
 ============================================================================
 Name        : Quiz4_Q4.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void binary(unsigned int n)
{ int i ,b;
printf("\n%u binary representation is :",n);
for(i=31;i>=0;i--)
{
	b=n>>i;
	if((b&1)==1)
		printf("1");
	else
		printf("0");
}
}


int main(void) {
	printf("c program to convert decimal to ASCII with integer representation and vice versa\n");
	char y[100]; int size,i,size2;  unsigned int n;  int p[100];
	printf("Enter a decimal num between 0 & 4294967295 :");
	fflush(stdout);
	scanf("%s",y);
	fflush(stdin);
	size =	strlen(y);
	n=atoi(y);
	printf("the numbers by ASCII :");
	for( i=0;i<size;i++)
	{
		printf("%d ",y[i]);
	}

	binary( n);

	printf("\nEnter the size of array :");
	fflush(stdout); fflush(stdin);
	scanf("%d",&size2);
	fflush(stdout); fflush(stdin);
	printf("Enter the ASCII numbers between 48 & 57 :\n");
	for( i=0;i<size2;i++)
	{
		printf("Enter the element %d =",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%d",&p[i]);
	}


	for( i=0;i<size2;i++)
	{
		if(size2==10 &&(p[0]-48)==4 && (p[1]-48)==2 &&(p[2]-48)==9 &&(p[3]-48)==4 &&(p[4]-48)==9 &&(p[5]-48)==6 &&(p[6]-48)==7 &&(p[7]-48)==2 &&(p[8]-48)==9 &&(p[9]-48)==5)
		{
			printf("\nthe max size of int is 4294967295:");
			break;
		}
		else
			printf("%d",p[i]-48);
	}



	return EXIT_SUCCESS;

}

