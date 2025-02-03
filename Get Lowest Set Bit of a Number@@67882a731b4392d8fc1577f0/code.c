#include <stdio.h>
int main() {
    int a,b=0;
    scanf("%d",&a);
    if(a==0){
        printf("-1");
        return 0;
    }
    while ((a&1)==0){
        a>>=1;
        b++;
    }
    printf("%d",b);
}