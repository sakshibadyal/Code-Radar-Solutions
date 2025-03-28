#include<stdio.h>
int fibo(int n){
    if(n==1||n==2)
    return 1;
    int a=fibo(n-1);
    int b=fibo(n-2);
    int c=a+b;
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    int x=fibo(n);
    printf("%d ",x);
}