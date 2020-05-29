#include <stdio.h>
/* 
  program to calculate the grade point by accepting 3 marks using switch case
 S - 90 above , A+ - 80 abobe, A - 70 , B+ - 60, B -50 , C+ - 40 
*/
int main(int argc, char *argv[]) {
	int m1,m2,m3;
	int t;
	int  g;
	
	printf("Enter 3 marks");
	scanf("%d%d%d",&m1,&m2,&m3);
	t=m1+m2+m3;
	g=(t/3)/10;
	switch(g)	{
	
	case 9: printf("S");break;
	case 8: printf("A+");break;
	case 7: printf("A");break;
	case 6: printf("B+");break;
	case 5: printf("B");break;
	case 4: printf("C+");
	default:
		printf("D");
	
	}
	printf("%d",g);
	
	return 0;
}

