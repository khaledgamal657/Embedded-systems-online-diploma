/*
 * d.c
 *
 *  Created on: Oct 10, 2022
 *      Author: khaled
 */

#include "stdio.h"

int fact (int x){
	int f=1;
	for(;x>0;x--){
		f=f*x;

	}
	return f;
}

int main(){
	printf("factorial of %d is %d",10,fact(10));
}
