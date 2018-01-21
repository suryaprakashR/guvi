#include<stdio.h>
int main()
{
int y;
printf("check whether leap year or not");
printf("\nenter year");
scanf("\n%d",&y);
if(y%4==0)
{
printf("yes");
}
else
{
printf("not leap year");
}
return 0;
}
