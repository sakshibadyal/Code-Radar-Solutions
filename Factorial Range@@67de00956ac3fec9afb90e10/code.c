#include <stdio.h>
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
void factorialRange(int a, int b) {
    if (a>b || a<0 || b<0) {
        printf("Invalid range\n");
        return;
    }
    for (int i=a; i<=b;i++) {
        printf("%lld\n", factorial(i));
    }
}