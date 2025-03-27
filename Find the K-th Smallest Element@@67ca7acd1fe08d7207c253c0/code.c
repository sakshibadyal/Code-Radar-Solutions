#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) { 
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(&arr[i], &arr[minIdx]);
    }
}
int kthSmallest(int arr[], int n, int k) {
    if (k < 1 || k > n) {
        return -1; 
    }
    selectionSort(arr, n, k); 
    return arr[k - 1]; 
}