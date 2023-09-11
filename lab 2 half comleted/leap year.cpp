/*this programe is used to find the leap year*/
#include<stdio.h>
#include<math.h>
int main( )
{
	int a;
	printf("enter the req year");
	scanf("%d",&a);
	if(a%4==0&&(a%100!=0||a/400==0))
		printf("this is a leap year");
    else
		printf("this is not a leap year");
	return 0;
}
