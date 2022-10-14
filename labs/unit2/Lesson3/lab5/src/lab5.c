/*
 ============================================================================
 Name        : lab5.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate the Average Students Degrees
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n ,i; double j , m=0;
	printf("Please the Enter of student: ");
			fflush(stdout);
			scanf("%d",&n);
			fflush(stdin);
		for(i=1;i<=n;i++)
		{
			printf("Enter student (%d) degree: ",i);
			fflush(stdout);
			scanf("%lf",&j);
			m=m+j;
		}
		printf("Average students degree is: %lf",m/n);
	return EXIT_SUCCESS;
}
