#include <stdio.h>
#include <stdlib.h> 
int findMissingPositive(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0 || arr[i] > n) {
            arr[i] = n + 1;
        }
    }
    for (int i = 0; i < n; i++) {
        int val = abs(arr[i]);
        if (val <= n) {
            arr[val - 1] = -abs(arr[val - 1]);
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            return i + 1;
        }
    }
    return n + 1;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = findMissingPositive(arr, n);
    printf("%d\n", result);
    return 0;
}