#include <stdio.h>
int main() {
    int n, target;
    scanf("%d", &n);  
    int arr[100];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    scanf("%d", &target);  
    int index = -1;  
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;  
        }
    }
    printf("%d\n", index);  
    return 0;
}