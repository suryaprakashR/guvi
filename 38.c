#include<stdio.h>
#include<conio.h> 
void main()
{
 int a, b;
 printf("\n Enter values for a and b:");
 scanf("%d%d",&a,&b);
 printf("Before swapping: \n");
 printf("a=%d, b=%d\n",a,b);
 a=a^b;
 b=a^b;
 a=a^b;
 printf("After swapping: \n");
 printf("a=%d,b=%d\n",a,b); 
 getch();
} 
