#include <stdio.h>
#include <math.h>
/* 
  Write a program to check whether  a triangle is made of these
  numbers  as the sides if so check for different types of triangle.
*/

int main(int argc, char *argv[]) {
	float a,b,c;
	printf("Enter three Sides");
	scanf("%f%f%f",&a,&b,&c);
	printf("\n Sides are %f  %f  %f\n",a,b,c);
	if( a+b >c  && b+c >a && a+c>b ) { 
		// check for the possibilty of triangle formation
		if(a==b && b== c )
			printf("Equilateral Triangle");
		else if (a==b || a==c || b==c)
			printf("Isosceles Triangle");
		else if( c*c==a*a+b*b || b*b == c*c+a*a || a*a== b*b+ c*c )
			printf("Right-angled  Triangle");
		else 
			printf("Ordinary Triangle");
	}
	else
	   printf("Unable to create a Triangle ");
		
	
	return 0;
}

