/*this programe is used to find the cube root of a number*/
#include<stdio.h>
#include<math.h>

int main( )
{
	double a,b;
	printf("enter req num to find cube root");
	scanf("%f",&a);
	b=pow(a,1/3);
	printf("the cube root of given number %f",b);
	return 0;
}
