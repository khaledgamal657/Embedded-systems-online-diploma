/*
 * ff.c
 *
 *  Created on: Oct 10, 2022
 *      Author: khale
 */

#include "stdio.h"

int power(int base,int exp);
int main(){
	int base,exp;
	printf("Enter base number");
	fflush(stdout); fflush(stdin);
	scanf("%d",&base);
	printf("Enter power number");
	fflush(stdout); fflush(stdin);
	scanf("%d",&exp);
	printf("%d^%d=%d",base,exp,power(base,exp));

}
int power(int base,int exp){
	if(exp!=0)
	{
		return base*power(base,exp-1);
	}
	else
		return 1;

}
