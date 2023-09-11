/*this programme is to covert the kilometer into meter ,centuimeter and millimeter*/
#include<stdio.h>
int main( )
{
	float a,b,c,d;
	printf("given no of kilometers %f");
	scanf("%f",&a);
	b=1000*a;
	c=100*b;
	d=10*c;
	printf("the no of meters for the given kiolmeters is %f",b);
	printf("the no of centi meters of the given kilometers is %f",c);
	printf("the no of millimeters of the given kiolometers is %f",d);
	return 0;
}
