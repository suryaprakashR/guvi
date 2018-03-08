#include<stdio.h>
int main()
{
int num,count=0,x=1,i;
printf("enter the number:");
scanf("%d",&num);
while(num!=1)
{
num=num/2;
count++;
}
for(i=0;i<count+1;i++)
x=x*2;
printf("%d",x);
return 0;
}
