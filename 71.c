#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int n,i,flag=0;
    printf("Enter the string:");
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]!=s[n-i-1])
        {
        flag=1;
        break;
        }
    }
    if(flag)
    {
        printf("no");
    }
    else
    {
        printf("yes");
     }
     return 0;
}
