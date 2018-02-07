#include<stdio.h>
#include<string.h>
void main()
{
    int b,i,count=0;
    printf("Enter the string:");
    char a[1000];
    gets(a);
    b=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        count++;
    }
    printf("the no of lines in the string is %d",count);
}
