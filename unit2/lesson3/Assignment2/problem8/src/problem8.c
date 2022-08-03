/*
 ============================================================================
 Name        : problem8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		float x ,y ;  char b ;
		printf("Enter operator either + or - or * or / :");
		fflush(stdout);
		scanf("%c" ,&b);
		fflush(stdin);
		printf("Enter two operands:");
		fflush(stdout);
		scanf("%f %f",&x , &y);
		fflush(stdin);
		switch (b){
		case '*': printf("%.1f * %.1f = %.1f", x,y,x*y);
		break;
		case '+': printf("%.1f + %.1f = %.1f", x,y,x+y);
		break;
		case '-': printf("%.1f - %.1f = %.1f", x,y,x-y);
		break;
		case '/': printf("%.1f / %.1f = %.1f", x,y,x/y);
		break;
		}

}
