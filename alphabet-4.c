#include <stdio.h>
// program to check whether the character is a alphabet,digit , white space character or a  special character  
int main(int argc, char *argv[]) {
	
	char ch;
	printf("Enter a character");
	scanf("%c",&ch);
	if(ch>='A' && ch <='Z' || ch>='a' && ch <='z' ) /* a=97 to z= 122  A=65 to Z=90 */ 
		printf(" An alphabet");
	else if(ch>='0' && ch <='9')  /* if(ch>=48 && ch<=57)*/
		printf("digit");
	else if(ch==' ' || ch=='\t' || ch=='\b' || ch=='\n')
		printf("white space character");
	else
		printf("Special Character");
	return 0;
}

