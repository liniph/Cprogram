#include <stdio.h>
// program to check whether the character is upper case or not
int main(int argc, char *argv[]) {
	
	char ch;
	printf("Enter a character");
	scanf("%c",&ch);
	if(ch>='A' && ch <='Z')
		printf("Upper case letter");
	else
		printf("Not Upper case");
	return 0;
}
