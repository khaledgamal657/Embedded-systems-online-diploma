/*
 * r.c
 *
 *  Created on: Sep 21, 2022
 *      Author: khale
 */

#include "stdio.h"
void main(){
	int r;
	int c;
	float mat1 [2][2];
	float mat2 [2][2];
	float sum [2][2];
	printf("Enter the elements of 1st matrix\n");
	for (r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("Enter a%d%d\n",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&mat1[r][c]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for (r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("Enter b%d%d\n",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&mat2[r][c]);
		}
	}
	printf("sum of matrix");
	for (r=0;r<2;r++){
		for(c=0;c<2;c++){
			sum[r][c]=mat1[r][c]+mat2[r][c];
			printf(" %.2f",sum[r][c]);

		}
		printf("\r\n");
	}

}
