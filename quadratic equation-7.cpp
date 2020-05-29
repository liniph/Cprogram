#include <stdio.h>
#include <math.h>
/* 
  Write a program to solve quadratic equation
*/

int main(int argc, char *argv[]) {
	float a,b,c;
	double disc,r1,r2,rp,ip;
	printf("\nEnter the Coefficients ");
	scanf("%f%f%f",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc==0)
	{
		r1=-b/(2*a);
		printf("\nRoots are Real and Equal ");
		printf("Root= %g",r1);
		
	}
	else if(disc>0){
		r1=(-b+sqrt(disc))/(2*a);
		r2=(-b-sqrt(disc))/(2*a);
		printf("\nRoots are Real and Different");
		printf("Roots are %g\t%g",r1,r2);
	}
	else{
		rp=-b/(2*a);
		ip=sqrt(-disc)/(2*a); 
		/*use -disc because sqrt function accepts only positive arguments*/
		printf("\nRoots are imaginary ");
		printf("Roots are %g+%gi\t%g-%gi",rp,ip,rp,ip); 
		/* eg: Roots are  2+4i	2-4i */
	}
	
	return 0;
}

