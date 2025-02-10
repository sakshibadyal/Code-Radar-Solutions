#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int bits=(a>>b)&1;
    printf("%d\n",bits);
       }