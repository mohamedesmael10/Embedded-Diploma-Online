/*
 ============================================================================
 Name        : problem3.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse(){
 char s;

    scanf("%c", &s);
    fflush(stdout); fflush(stdin);
    if (s != '\n'){
        Reverse();
        printf("%c", s);
    }
}
int main(){

	printf("Enter a Sentence:");
	 fflush(stdout); fflush(stdin);
    Reverse();

    return EXIT_SUCCESS;
}
