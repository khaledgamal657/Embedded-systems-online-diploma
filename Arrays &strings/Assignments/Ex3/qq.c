/*
 * qq.c
 *
 *  Created on: Sep 24, 2022
 *      Author: khaled
 */

#include"stdio.h"
int main(){

	int rows;
	int columns;
	int E [10][10];
	int T [10][10];
	int r;
	int c;
	/*---------------------------------------------------------------------------------*/

	printf("Enter rows and columns of matrix");
	fflush(stdout); fflush(stdin);
	scanf("%d""%d",&rows,&columns);
	printf("Enter elements of matrix:\r\n");

	/*---------------------------------------------------------------------------------*/

	for(r=0;r<rows;r++){

		for(c=0;c<columns;c++){
			printf("Enter element %d%d",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf("%d",&E[r][c]);

		}

	}
	/*---------------------------------------------------------------------------------*/
	printf("Entered Matrix is\n");
	/*---------------------------------------------------------------------------------*/

	for(r=0;r<rows;r++){

		for(c=0;c<columns;c++){

			printf("%d\t",E[r][c]);
			if(c==columns-1)
				printf("\r\n");

		}

	}
	/*---------------------------------------------------------------------------------*/
	printf("Transpose of matrix is\n");
	/*---------------------------------------------------------------------------------*/

	for(r=0;r<rows;r++){

		for(c=0;c<columns;c++){
			T[c][r]=E[r][c];

		}

	}
	for(r=0;r<rows;r++){

		for(c=0;c<columns;c++){
			printf("%d\t",T[r][c]);



		}

		printf("\r\n");
	}

}
