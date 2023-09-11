/*this programme is used to calculate the electricity bill of a given units*/
#include<stdio.h>
int main( )
{
	float a;
	printf("enter the no of units consumed");
	scanf("%f",&a);
	if (a>=0&&a<=100)
	printf("the electricity bill is %f",a*2);
	else if (a>=101&&a<=250)
	printf("the electricity bill is %f",a*4);
	else
	printf("the electricity bill is %f",a*6);
	return 0;
}
