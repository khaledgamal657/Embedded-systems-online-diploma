/*
 * i.c
 *
 *  Created on: Sep 20, 2022
 *      Author: khale
 */
#include "stdio.h"
void main(){
	int r;
	int c;
	float x[3][3];
	float y[3][3];
	for (r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("enter the item(%d,%d)",r,c);
			fflush(stdout);fflush(stdin);
			scanf("%f",&x[r][c]);
		}

	}
	printf("the matrix is\n");
	for (r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("%.2f\t",x[r][c]);
		}
		printf("\r\n ");

	}
	printf("the transpose matrix is \n");
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			y[c][r]=x[r][c];
		}

	}
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("%.2f\t",y[r][c]);
		}
		printf("\r\n");
	}

}

