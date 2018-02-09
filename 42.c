#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int i,j;
	printf("enter the string 1 ");
	scanf("%s",&a);
	printf("enter the string 2 ");
	scanf("%s",&b);
	i=strlen(a);
	j=strlen(b);
	if(i>j)
	printf("%s",a);
	else if(i<j)
	printf("%s",b);
	else
	printf("%s and %s both are same size.",a,b);
	return 0;
}
