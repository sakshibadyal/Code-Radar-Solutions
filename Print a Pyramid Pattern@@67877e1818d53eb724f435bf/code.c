#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf(" ");
        }
        int a=1;
        for(int k=1;k<=n;k++){
            printf("*");
            a=a+2;
        }
        printf("\n");
    }
}