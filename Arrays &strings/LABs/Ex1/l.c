/*
 * l.c
 *
 *  Created on: Sep 20, 2022
 *      Author: khale
 */

#include "stdio.h"
void main(){
	int i;
	float degrees[5];
	for(i=0;i<5;i++){
		printf("Enter student %d degree ",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%f",&degrees[i]);
	}
	for(i=0;i<5;i++){
		printf("\n student %d degree is %f",i+1,degrees[i]);
	}
}
