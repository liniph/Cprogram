#include <stdio.h>
/* program to find the biggest of three nos - using simple if  */
int main(int argc, char *argv[]) {
	
	int a,b,c,l;
	printf("Enter three  numbers");
	scanf("%d%d%d",&a,&b,&c);
	l=a;
	if (b>l ) l=b;
	if (c>l ) l=c;
	
			printf("%d is big",l);
	
	return 0;
}

