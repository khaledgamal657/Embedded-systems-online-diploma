/*
 * rr.c
 *
 *  Created on: Sep 14, 2022
 *      Author: khale
 */

#include"stdio.h"
void main(){
	char a;
	float l,m;
	printf("enter operator either + or - or *or /");
	fflush(stdout); fflush(stdin);
	scanf("%c",&a);
	printf("enter two operands");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&l,&m);
	switch (a){
	case'+':
	{
		printf("%f +%f=%f",l,m,l+m);
	}
	break;
	case'-':
	{
		printf("%f -%f=%f",l,m,l-m);
	}
	break;
	case'*':
	{
		printf("%f *%f=%f",l,m,l*m);
	}
	break;
	case'/':
	{
		printf("%f /%f=%f",l,m,l/m);
	}
	break;

	}

}
