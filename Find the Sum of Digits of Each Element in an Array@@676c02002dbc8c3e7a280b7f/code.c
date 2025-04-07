#include<stdio.h>
int sum(int num){
    int sum=0;
    while(num!=0){
        sum +=num % 10;
        num/=10;
       
    }
    if(sum<0){
        sum *= (-1);
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",sum(arr[i]));
    }
    return 0;
}