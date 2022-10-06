/*
 * rr.c
 *
 *  Created on: Sep 26, 2022
 *      Author: khaled
 */

#include"stdio.h"
int main(){
	char text[100];
	int i;


	printf("Enter a string:\t");
	fflush(stdout); fflush(stdin);
	gets(text);

	for(i=0;text[i]!='\0';i++);
		printf("Length of string=%d",i);


}
