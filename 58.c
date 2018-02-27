#include<stdio.h>
int main()
{
    long int i ;
    long int k;
    scanf("%d%d",&i,&k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("%d %d", i, k);
    return 0;
}
