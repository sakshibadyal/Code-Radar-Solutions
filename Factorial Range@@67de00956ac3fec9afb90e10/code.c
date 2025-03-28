



#include<stdio.h>
int factorial(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact*=1;
    }
    return fact;
}
void factorialRange(int a,int b){
    if(a>b||a<0){
        printf("invalid range");
        return ;
    }
    for(int i=a;i,=b;i++){
        printf("%d\n",i);
    }
}