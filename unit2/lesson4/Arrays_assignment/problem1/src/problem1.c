/*
 ============================================================================
 Name        : problem1.c
 Author      : Mohamed_Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float array1[2][2]; float array2[2][2]; float array3[2][2]; int i , j;
	printf("Enter the elements of 1st matrix\r\n");
	fflush(stdout);
	for(i=0;i<2;i++){
		for(j=0;j<2;j++) {
			printf("Enter a%d%d ", i+1,j+1);
			fflush(stdout);
			scanf("%f", &array1[i][j]);
			fflush(stdin);
		}}

	printf("Enter the elements of 2nd matrix\r\n");
	fflush(stdout);
	for(i=0;i<2;i++){
		for(j=0;j<2;j++) {
			printf("Enter a%d%d ", i+1,j+1);
			fflush(stdout);
			scanf("%f", &array2[i][j]);
			fflush(stdin);
		}}
	printf("Sum Of Matrix:\r\n");
	fflush(stdout);
	for(i=0;i<2;i++){
		for(j=0;j<2;j++) {
			array3[i][j]=array1[i][j] + array2[i][j];
			printf("%.1f\t",array3[i][j]);
			fflush(stdout);
			fflush(stdin);
		} printf("\r\n");
	}
	return EXIT_SUCCESS;
}
