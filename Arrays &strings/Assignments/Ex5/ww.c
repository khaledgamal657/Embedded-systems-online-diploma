/*
 * ww.c
 *
 *  Created on: Sep 26, 2022
 *      Author: khaled
 */


#include"stdio.h"
int main(){

	char text[100];
	char ch;
	int i;
	int count=0;

	printf("Enter a string:\t");
	fflush(stdout); fflush(stdin);
	gets (text);

	printf("Enter a char to find frequency");
	scanf("%c",&ch);
	for(i=0;text[i]!='\0';i++){
		if (ch==text[i])
			count=count+1;
	}
	printf("frequency of %c = %d",ch,count);
}
