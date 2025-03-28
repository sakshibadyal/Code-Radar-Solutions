#include<stdio.h>
int findKthMissing(int arr[], int n, int k){
    int missingCount = 0, current = 1, index = 0;
    while(missingCount < k){
        if(index < n && arr[index] == current){
            index++;
        }
        else{
            missingCount++;
            if(missingCount == k){
                return current;
            }
        }
        current++;
    }
    return -1;
}