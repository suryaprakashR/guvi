#include <stdio.h>
 
int main()
{
  char ch;
 
  printf("Input a character\n");
  scanf("%c", &ch);
 
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z'))

printf("alphapet");

    else
      printf("No");
      return 0;
  
  }
