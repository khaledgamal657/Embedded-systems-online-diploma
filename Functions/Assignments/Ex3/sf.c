/*
 * sf.c
 *
 *  Created on: Oct 10, 2022
 *      Author: khale
 */

void reverse ();
int main(){

	printf("enter a reversed sentence");
	reverse();
	return 0;
}
void reverse(){
	char c;

	scanf("%c",&c);
	if(c!='\n'){
		reverse();
		printf("%c",c);
	}
}
