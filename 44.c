#include<stdio.h>
void main()
{
int i,n,count;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<11;i++)
{
if(i==n)
{
count++;
}
}
if(count==1)
{
printf("YES");
}
else
{
printf("NO");
}
}
