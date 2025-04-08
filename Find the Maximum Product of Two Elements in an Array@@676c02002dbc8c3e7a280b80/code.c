#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max1 = -1000000, max2 = -1000000;
    int min1 = 1000000, min2 = 1000000;
    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }
    int product1 = max1 * max2;
    int product2 = min1 * min2;
    printf("%d\n", (product1 > product2) ? product1 : product2);
    return 0;
}