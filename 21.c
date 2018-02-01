#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int A, D, N, value, sum=0, i;
 
    printf("Enter the number of terms in AP series\n");
    scanf("%d", &N);
 
    printf("Enter first term and common difference of AP series\n");
    scanf("%d %d", &A, &D);
    value = A;
    printf("AP SERIES\n");
    for(i = 0; i < N; i++) {
        printf("%d ", value);
        sum += value;
        value = value + D;
    }
 
    printf("\nSum of the AP series till %d terms is %d\n", N, sum);
 
    getch();
 return 0;
}
