#include<stdio.h>
int main()
{
    char a[100];
    int i,j,flag=1;
    scanf("%s",&a[i]);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                flag=0;
            }

        }
    }
    if(flag==1)
    {
        printf("Isogram");
    }
    else
    {
        printf("Not an Isogram");
    }
    return 0;
}
