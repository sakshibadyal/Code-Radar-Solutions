#include<stdio.h>
int mian(){
    int a;
    scanf("%d",&a);
    if(a%5 || a%11){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}