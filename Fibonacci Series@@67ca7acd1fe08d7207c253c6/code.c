#include <stdio.h>
void fibonacciSeries(int n) {
    int a=0;
    int b=1;
    int next;
    for (int i=0;i<n;i++) {
        printf("%d", a);
        if(i<n-1){
            printf(" ");
        }
        next = a+b;
        a=b;
        b=next;
    }
    printf("\n"); 
}