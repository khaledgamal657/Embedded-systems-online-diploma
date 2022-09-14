/*
 * gg.c
 *
 *  Created on: Sep 14, 2022
 *      Author: khale
 */


#include "stdio.h"
void main(){
	int i;
	int k;
	int sum=1;
	printf("Enter an integer");
	fflush(stdout); fflush(stdin);
	scanf("%d",&k);
	if(k>0){
	for(i=1;i<=k;i++){
		sum=sum*i;
	}
	printf("sum= %d ",sum);}
	else {printf("factorial of negative number doesn't exist");}
}

