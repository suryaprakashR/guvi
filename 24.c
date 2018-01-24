#include<stdio.h>
int main()
{
	int x,y,z,temp;
	int a[1000];
	printf("enter the number\n");
	scanf("%d",&z);
	printf("enter the array of n numbers\n");
	for(x=0;x<z;x++)
	{
		scanf("%d",&a[x]);
	}
		for(x=0;x<z;x++)
		{
			for(y=x+1;y<z;y++)
			{
				if(a[x]>a[y])
				{
				temp=a[y];
				a[y]=a[x];
				a[x]=temp;
				}
			}
		}
		for(x=0;x<z;x++)
		{
		printf("%d\t",a[x]);
		}
	return 0;
}
