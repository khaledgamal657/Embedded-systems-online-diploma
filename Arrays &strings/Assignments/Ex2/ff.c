/*
 * ff.c
 *
 *  Created on: Sep 24, 2022
 *      Author: khale
 */

#include"stdio.h"

void main(){

	int data;
	float x[10];
	int i;
	float sum=0;
	float Average;

	printf("Enter the numbers of data:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&data);


	for (i=0;i<data;i++){

		printf("%d . Enter number",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%f",&x[i]);
		sum=sum+x[i];

	}

	Average = sum/data;
	printf("the average = %f",Average);



}
