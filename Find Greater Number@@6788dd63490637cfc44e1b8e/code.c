#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b || b>a){
        printf("10");
    }
    else if(a<b || b<a){
        printf("15");
    }
}