#include<stdio.h>
int main() 
{
	int a,b,c,i,flag=0;
	printf("enter the two number:");
	scanf("%d %d",&a,&b);
	c=a*b;
	for(i=1;i<=c/2;i++)
	{
		if(i*i==c)
		{
			flag=1;
			break;
		}
	
	}
	
	if(flag==1)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
	return 0;
}
