/*
 * ll.c
 *
 *  Created on: Sep 14, 2022
 *      Author: khale
 */

#include "stdio.h"
void main(){
	char alphabet;
	printf("enter a charater");
	fflush(stdout);fflush(stdin);
	scanf("%c",&alphabet);
	switch (alphabet){
	case 'a':
	{
		printf("alphabet is vowel");
	}
	break;
	case 'e':
	{
		printf("alphabet is vowel");
	}
	break;
	case'i':
	{
		printf("alphabet is vowel");
	}
	break;
	case'o':
	{
		printf("alphabet is vowel");
	}
	break;
	case'u':
	{
		printf("alphabet is vowel");
	}
	break;
	default:
		printf("alphabet is constant");
		break;
	}
}

/*#include "stdio.h"
void main(){
	char alphabet;
		printf("enter a charater");
		fflush(stdout);fflush(stdin);
		scanf("%c",&alphabet);
		if(alphabet=='a'||alphabet=='e'||alphabet=='o'||alphabet=='i'||alphabet=='u'){
			printf("%c  is vowel",alphabet);}
			else
				printf("%c is constant",alphabet);

}*/
