#include<stdio.h>
int main()
{
int i,j,num,temp;
int a[10000];
printf("enter the number of elements \n");
scanf("%d",&num);
printf("enter the array of n numbers\n");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{		
for(j=i+1;j<num;j++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
printf("the maximum num is %d\t",a[num-1]);
return 0;
}
