/*
 * ff.c
 *
 *  Created on: Sep 14, 2022
 *      Author: khale
 */
#include "stdio.h"
void main(){
	float a;
	printf("Enter a number");
	fflush(stdout);fflush(stdin);
	scanf("%f",&a);
	if(a>0){printf("%f is positive",a);}
	else if(a<0) {printf("%f is negative",a);}
	else printf("avoid number 0");
}

