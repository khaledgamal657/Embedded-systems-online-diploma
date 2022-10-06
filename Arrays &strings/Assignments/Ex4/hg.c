/*
 * hg.c
 *
 *  Created on: Sep 26, 2022
 *      Author: khaled
 */

#include "stdio.h"
int main(){
	int x[100];
	int k; ///no. of elements
	int i; /// iterations
	int a; ///element to be searched
	int b;

	printf("Enter no of elements:");
	fflush(stdout); fflush(stdin);
	scanf("%d",k);
	///////////////////////////////////////////////////////////////////////////////////////////
	printf("Enter the elements  :");
	///////////////////////////////////////////////////////////////////////////////////////////
	for (i=0;i<k;i++){
		scanf("%d",&x[i]);
	}
	///////////////////////////////////////////////////////////////////////////////////////////

	printf("Enter the elements to be searched  :");
	fflush(stdout); fflush(stdin);
	scanf("%d",a);

	for(i=0;i<k&&a!=x[i];i++){
		if (a==x[i]){
			printf(" the element at the location  :%d",i+1);
		}
	}

}
