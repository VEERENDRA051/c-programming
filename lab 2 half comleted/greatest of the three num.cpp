/*this programme is to find the greatest of three numbers*/
#include<stdio.h>
#include<math.h>
int main( )
{
	float a,b,c;
	printf("enter the given nums ");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("the greatest of the three num is %f",a);
	}
	else if (b>c)
	{
		printf("the greatest of the three num is %f",b);
	}
	else
	printf("the greatest of the three num is %f",c);
}
