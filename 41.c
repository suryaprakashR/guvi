#include<stdio.h>
#include<string.h>
void main()
{
    char s[100],i;
    int k;
    printf("\nEnter the string:");
    gets(s);
    printf("\nEnter the number of times to print:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        printf("\n %s",s);
        
    }
    
}
