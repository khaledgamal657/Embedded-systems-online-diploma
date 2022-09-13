/*
 * main.c
 *
 *  Created on: Sep 13, 2022
 *      Author: khale
 */


#include"stdio.h"
void main(){
	int a;
	int b;
	printf("Enter value a=\t");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&a);
	printf("Enter value b=\t");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("After swapping value of a=%d\n",a);
	printf("After swapping value of b=%d",b);
}

