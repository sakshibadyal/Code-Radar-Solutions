#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    b=a&(1<<31);
    printf("%d",b);
}