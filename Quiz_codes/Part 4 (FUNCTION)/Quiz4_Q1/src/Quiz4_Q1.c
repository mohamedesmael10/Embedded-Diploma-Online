/*
 ============================================================================
 Name        : Quiz4_Q1.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cmp (char *n1,char *username)
{
    if((strcmp(n1,username))==0)
    printf("the username is same");
    else
       printf("the username is not same");


}

int main(void) {
      char n1[100] ; char username []={"esmael"};
  printf("Note the correct answer is ==> esmael \n");
  printf("Enter the your name: ");
  fflush(stdout);
  scanf("%s",n1 );
  fflush(stdin);
  cmp(n1,username);
}




/*
 ============================================================================
 Name        : Quiz4_Q1.c
 Author      : Esmael
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cmp (char *n1,char *n2)
{
    if((strcmp(n1,n2))==0)
    printf("the username is same");
    else
       printf("the username is not same");


}

int main(void) {
      char n1[100] ,n2[100];
  printf("Enter the username: ");
  fflush(stdout);
  scanf("%s",n1 );
  fflush(stdin);
  printf("Enter the your name: ");
  fflush(stdout);
  scanf("%s",n2 );
  fflush(stdin);
  cmp(n1,n2);
}
 */
