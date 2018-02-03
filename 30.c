#include<stdio.h>
int main()
{
    int hour1,min1,rem1,hour2,min2,rem2;
    printf("\nEnter the 1st time in hour and min:");
    scanf("%d %d",&hour1,&min1);
    printf("\nEnter the 2nd time in hour and min:");
    scanf("%d %d",&hour2,&min2);
    rem1=hour1-hour2;
    rem2=min1-min2;
    printf("\n%d %d",rem1,rem2);
    return 0;
}
