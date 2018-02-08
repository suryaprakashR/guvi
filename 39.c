#include<stdio.h>
int main()
{
int n, s1, s2, z;
printf(" enter number of elements: ");
scanf("%d", &n);
z=n;
if(n>0)
{
printf("\n Enter the First element : ");
scanf("%d", &s1);
n--;
if(n>0)
{
for(;n>=1;n--)
{
printf("\n Enter the next element : ");
scanf("%d", &s2);
if(s1<s2)
s1=s2;
}
}
}
printf("\n The Largest of %d elements is %d", z, s1);
return(0);
}
