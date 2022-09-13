/*
 * kk.c
 *
 *  Created on: Sep 13, 2022
 *      Author: khale
 */
#include "stdio.h"
void main(){
	float a,b,prod;
	printf("Enter two integers:\t");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	prod=a*b;
	printf("prod:\t%f",prod);


}

