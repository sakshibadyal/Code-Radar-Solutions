#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); 
 
for(int i=0;i<n;i++){
    int a=(i%2==0)? 1:0;
    for(int j=0;j<=i;j++){
        printf("%d ",a);
        a=1-a;
    }
    printf("\n");
}
}