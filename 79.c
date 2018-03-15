#include<stdio.h>
int main()
{
	float c,a,b,i;
	scanf("%f%f",&a,&b);
	c=a*b;
	printf("\t\t%f",c);
	i=sqrt(c);
	printf("\t\t%f",i);
	if(a==sqrt(c)&&b==sqrt(c))
		printf("\nyes");
		else
		printf("\nno");
return 0;
}
