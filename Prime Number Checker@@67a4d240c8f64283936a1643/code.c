#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int main() {
    int t,num;
    scanf("%d", &num);
    if (isPrime(num))
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
