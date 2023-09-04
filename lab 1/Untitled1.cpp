/*this program is used to perform all arthmatic operations*/
#include <stdio.h>
int main( )
{
	int a,b,c,d,e,f;
	scanf("%d %d",&a,&b);
	printf("select two numbers %d");
	c = a+b;
	printf("the sum of two numbers is %d",c);
	d= a-b;
	printf("the substraction of two numbers is %d ",d);
	e = a*b;
	printf("the product of two numbers is %d",e);
	f= a/b;
	printf("the division of two numbers is %d",f);
	return 0;
}
