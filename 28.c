#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[1000],num;
clrscr();
printf("enter the value");
scanf("%d",&num);
printf("enter tha array elements\n");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
printf("\n%d \t%d\n",a[i],i);
 }
 return 0;
}                                       
