
#include<stdio.h>
int factorial(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact*=i;
    }
    return fact;
}
void factorialrange(int a,int b){
    if(a>b||a<0){
        printf("Invalid range");
    return;
    }
    for(int i=a;i<=b;i++){
        printf("%d\n",factorial(n));
    }
}