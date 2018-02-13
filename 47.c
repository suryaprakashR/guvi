#include<stdio.h>
int main()
{
  int a[100],i,s,l,n;
  printf("\nEnter the array size: ");
  scanf("%d",&n);
  printf("\nEnter the elements:");
  for(i=0;i<n;++i)
  scanf("%d",&a[i]);
  l=s=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]>l)
    l=a[i];
    if(a[i]<s)
    s=a[i];
  }
     printf("\nThe largest number is %d",l);
     printf("\nThe smallest number is %d",s);
     return 0;
}
