#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        int a=1;
        for(int k=1;k<=i;k++){
            printf("*");
            a=a+2;
        }
        printf("\n");
    }
}