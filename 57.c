#include <stdio.h>
int main()
{
     int i[1000000] ;
     int j[1000000];
    int t;
    scanf("%d %d",&i[1000000],&j[1000000]);
    t=i[1000000];
    i[1000000]=j[1000000];
    j[1000000]=t;
    printf("%d %d", i[1000000], j[1000000]);
    return 0;
}
