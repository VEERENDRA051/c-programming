/* this the programto to swap two numbers */
#include <stdio.h>
int main ( )
{
	int a,b,t;
	printf("enter thee reqired num %d");
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("the swap of the of the num is %d %d",a,b);
	return 0;
}
