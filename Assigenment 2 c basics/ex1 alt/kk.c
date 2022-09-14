/*
 * kk.c
 *
 *  Created on: Sep 14, 2022
 *      Author: khale
 */


#include "stdio.h"
void main(){
	int a;
	printf("Enter an integer");
	fflush(stdout); fflush(stdin);
	scanf("%d",&a);
	(a%2==0)?printf("%d is even",a):printf("%d is odd",a);

}
