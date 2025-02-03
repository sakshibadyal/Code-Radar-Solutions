#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++){
            printf(" ");
        }
        for(int j=i;j<=i;j++){
            printf("%d",j);
        }
        for(int j=i-1;j>=n;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}