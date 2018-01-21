#include <stdio.h>
#include<conio.h>
void main()
{
int num,m,n;
clrscr();
printf("enter m");
scanf("%d",&m);
printf("enter n");
scanf("%d",&n);
printf("Print Odd Numbers in a given range m to n:\n");
for (num = m; num <= n; num++)
{
if (num % 2 == 1)
printf ("%d ", num);
}
getch();
}
