/*this programe is to multiply two flating numbers and printing the out put both in int and floating point numbers*/
#include<stdio.h>
#include<math.h>
int main( )
{
	float a,b,c,d;
	scanf("%f %f",&a,&b);
	c=a*b;
	printf("the reqirired product of two num in floating point num is %f",c);
	d=floor(c);
	printf("the intergral product of two num is %f",d);
	return 0;
}
