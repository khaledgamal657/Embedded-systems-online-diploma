/*
 * main.c
 *
 *  Created on: Sep 13, 2022
 *      Author: khale
 */
#include "stdio.h"
void main(){
	float a,b;
	printf("Enter value of a=\t");
	fflush(stdout); fflush(stdin);
	scanf("%f",&a);
	printf("Enter value of b=\t");
	fflush(stdout); fflush(stdin);
	scanf("%f",&b);
	printf("After swapping value of a=%f\n",b);
	printf("After swapping value of b=%f",a);
}

