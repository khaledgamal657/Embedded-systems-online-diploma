/*
 * s.c
 *
 *  Created on: Oct 10, 2022
 *      Author: khaled
 */


#include "stdio.h"

int calcmin (int values [], int n){
	int i;
	int minvalue =values[0];
	for(i=0;i<n;i++){
		if(values[i]<minvalue)
			minvalue=values[i];
	}
	return minvalue;

}

int main(){
	int values [5]={5,2,10,100,9};
	printf("min value of the given array is %d",calcmin(values,5));
}
