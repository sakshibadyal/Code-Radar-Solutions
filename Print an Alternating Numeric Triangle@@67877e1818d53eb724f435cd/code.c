#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N); 
    for (int i = 0; i < N; i++) {
        int a= (i % 2 == 0) ? 1 : 0; 
        for (int j = 0; j <= i; j++) { 
            printf("%d ", a);
            a = 1 - a;
        }
        printf("\n"); 
    }
    
    return 0;
}
