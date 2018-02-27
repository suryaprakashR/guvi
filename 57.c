#include <stdio.h>
int main()
{
     int i[100000] ;
     int j[100000];
    int t;
    scanf("%d %d",&i[100000],&j[100000]);
    t=i[100000];
    i[100000]=j[100000];
    j[100000]=t;
    printf("%d %d", i[100000], j[100000]);
    return 0;
}
