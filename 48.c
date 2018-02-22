#include<stdio.h>
#include<conio.h>
 int main()
{
  int i,n,Sum=0,num;
  float Avg;
  clrscr();
  printf("\nPlease Enter How many Number you want?\n");
  scanf("%d",&n);
  printf("\nPlease Enter the elements one by one\n");
  for(i=0;i<n;i++)
   {
     scanf("%d",&num);
     Sum=Sum+num;
   }
  Avg=Sum/n;
  printf("\nSum of the %d Numbers = %d",n, Sum);
  printf("\nAverage of the %d Numbers = %.2f",n, Avg);
  return 0;
}
