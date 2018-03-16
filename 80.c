#include<stdio.h>
int main() 
{
    int val,k,r,ans=0;
	printf("enter the number");
	scanf("%d",&val);
	k=val;
	while(k>0)
	{
		r=k%10;
		ans=(ans*10)+r;
		k=k/10;
	}
	while(ans>0)
	{
		r=ans%10;
	if(r%2==0);
	else
	printf("%d\t",r);
		ans=ans/10;
	}
	}
