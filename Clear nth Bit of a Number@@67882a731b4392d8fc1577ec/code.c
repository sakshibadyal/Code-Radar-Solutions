#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a=a&(1<<31);
    printf("%d",a);
}