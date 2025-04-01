
#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
return fact;
}

void factorialRange(int a,int b){
    if(a>b||a<0){
        printf("Invalid range");
        return;
    }
    for(int i=a;i<=b;i++){
        printf("%d\n",factorial(i));
    }
}