#include <stdio.h>
// program to check whether the character is digit or not
int main(int argc, char *argv[]) {
	
	char ch;
	printf("Enter a character");
	scanf("%c",&ch);
	if(ch>='0' && ch <='9')
		printf(" A digit");
	else
		printf("Not a digit");
	return 0;
}

