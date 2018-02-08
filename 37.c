#include<stdio.h>
int main()
{
int a,b,temp;
printf("\nEnter the value of a and b\n");
scanf("%d %d",&a,&b);
printf("\nBefore Swapping a=%d and b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("\nAfter Swapping a=%d and b=%d\n",a,b);
return 0;
}
