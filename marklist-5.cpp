#include <stdio.h>
/* program to accept rollno and 3 marks (max 100) of a student and display the grade based on the conditions .
   To pass the exam , student must be mark not less than 40 and total mark not less than 150
   A grade - 80% , B - 60% , C grade - 50% , D  grade - below 50%
   Passed student are eligible for higher studies
*/
int main(int argc, char *argv[]) {
	int rno,m1,m2,m3;
	int t;
	float result,per;
	char g;
	result='F';
	printf("Enter rool no and 3 marks");
	scanf("%d%d%d%d",&rno,&m1,&m2,&m3);
	t=m1+m2+m3;
	per=t*100/3.0;
	g='D';
	if(m1>=40 && m2>=40 && m3 >=40 && t>=150 )	{
		result='P';
		if(per>=80)
			g='A';
		else if (per>=60)
			g='B';
		else if (per>=60)
			g='C';
	}
	printf("\n       Mark List"); 
	printf("\n Rollno\t%d",rno);
	printf("\n marks\t%d\t%d\t%d",m1,m2,m3);
	printf("\n total mark\t%d",t);
	printf("\n Grade\t%c",g);
	if (result=='P')
		printf("\n Eligible for Higher Studies");
	else
		printf("\n Not Eligible for Higher Studies");
	return 0;
}

