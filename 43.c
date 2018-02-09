#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int i,j,k,s=0;
	printf("enter the string 1 ");
	scanf("%s",&a);
	printf("enter the string 2 ");
	scanf("%s",&b);
	i=strlen(a);
	j=strlen(b);
	for(k=i;k<i+j;k++)
	{
		a[k]=b[s];
		s++;
	}
	printf("%s",a);
	return 0;
}
	
