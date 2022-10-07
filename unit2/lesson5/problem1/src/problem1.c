/*
 ============================================================================
 Name        : problem1.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Prime_Numbers (int n1 ,int n2)
{  int i,j,t,g;
if(n1 > n2)
{
	t = n1;
	n1= n2;
	n2  = t;
}
if(n1==0)
	n1+=2;
if(n1==1)
	n1+=1;
for(i=n1;i<=n2;i++)
{ g=1;
for(j=2;j<(i/2);j++)
{
	if(i%j==0)
	{	 g=0;
	break;

	}
}
if(g==1)
	printf("%d\t",i);
}
}
int main(void) {
	int x ,y ;
	printf("Enter two numbers(intervals):");
	fflush(stdout);
	scanf("%d" "%d" ,&x ,&y);
	fflush(stdin);
	printf("Prime numbers between %d and %d are: ",x,y);
	Prime_Numbers(x ,y);

	return EXIT_SUCCESS;
}
