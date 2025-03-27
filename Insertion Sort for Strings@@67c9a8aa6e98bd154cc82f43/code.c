#include<stdio.h>
#inlcude<string.h>
void insertionSort(char arr[][100],int n){
    char key[100];
    int i,j;
    for(int i=1;i<n;i++){
        strcpy (key, arr[i]);
        j=i-1;
        while(j>=0 && strcmp(arr[j],key)>0){
            strcpy (arr[j+1],arr[j]);
           j= j-1;

        }
        strcpy(arr[j+1], key);
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n", arr[i]);
    }
}