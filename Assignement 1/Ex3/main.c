/*
 * main.c
 *
 *  Created on: Sep 13, 2022
 *      Author: khale
 */
#include "stdio.h"
void main(){
	int a,b,sum;
	printf("Enter two integers:\t");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum:\t%d",sum);


}

