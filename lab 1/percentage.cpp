/*this program is used to calculate the pecentage of marks of a student */
#include<stdio.h>
int main ( )
{
	float a,b,c,d,e,f;
	printf("enter marks secured by the student in different subjects %f");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	f = (a+b+c+d+e)/5;
	printf ("the percentage of the marks got by the student is %f %%",f);
	return 0; 
}
