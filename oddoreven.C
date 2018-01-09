#include<stdio.h>
int main()
{
int number;
printf("\nEnter the number ");
scanf("%d",&number);
for(number=1;number<=10000;number++)
{
printf("ODD or EVEN");
if(number%2==0)
{
printf("number is even");
}
else
{
printf("number is odd");
}
return 0;
}
}
