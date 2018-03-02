#include<stdio.h>
int
main ()
{
  int n,i,ans;
  printf ("Enter the number:");
  scanf ("%d", &n);
  i=n%10;
  ans=n+(10-i);
  printf("%d",ans);
}
