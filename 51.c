#include <stdio.h>
int main() 
{
int i=0,n,count=0,a[100];
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
a[i]=n%10;
i++;
n=n/10;
count++;
}
for(i=count-1;i>=0;i--)
printf(" %d",a[i]);
return 0;
}
