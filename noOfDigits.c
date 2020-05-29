/* to find no of digits */
#include <stdio.h>
int main(int argc, char *argv[]) {
	int n;
  printf("Accept No");
  scanf("%d",&n);
  if(n<10 ) 
	  printf("Single Digit");
  else if(n<100) 
	  printf("Two digit");
  else 
	  printf("More then two disgits");
  
	
	return 0;
}

