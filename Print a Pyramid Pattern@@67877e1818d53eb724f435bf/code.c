#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+2-i;j++){
            printf("*");
        }
        printf("\n");
    }
}