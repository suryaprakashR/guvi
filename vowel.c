#include<stdio.h>
#include<conio.h>
int main()
{
char c;
int lcase,ucase;
printf("Enter the alphabet");
scanf("%c",&c);
lcase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
ucase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'):
if(lcase||ucase)
 printf(" %c it is vowel",c);
else
 printf("%c is consonant",c);
 return 0;
 }
 
 
