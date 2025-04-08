#include <stdio.h>
void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);  
    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    sort(arr, n);
    int maxLen = 1;
    int currLen = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            continue;
        } else if (arr[i] == arr[i-1] + 1) {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
            }
            currLen = 1;
        }
    }
    if (currLen > maxLen) {
        maxLen = currLen;
    }
    printf("%d\n", maxLen); 
    return 0;
}