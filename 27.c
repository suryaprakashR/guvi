#include <stdio.h>

void main()
{
  char a[20],s;
  printf("enter the string");
  scanf("%c",&s);
  if(isdigit(s)==0)
  {
    printf("the given string  is not numeric",s);
  }
  else
  {
    printf("the given string is numeric",s);
  }
}
