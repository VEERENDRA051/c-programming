/*swap two numbers with out usimg the third variable*/
#include <stdio.h>
int main ( )
{
	int a,b;
	printf("enter req num %d");
	scanf("%d %d",&a,&b);
	a=b;
	b=a;
	printf("the swap the num %d %d",a,b);
	return 0;
}
