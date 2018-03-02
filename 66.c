#include<stdio.h>
int main()
{
    int i,n,flag;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
         flag=1;
         else
         flag=0;
    
    }
    if(flag==0)
    {
    printf("prime number");
    }else
    {printf("not prime number");
    }return 0;
}
