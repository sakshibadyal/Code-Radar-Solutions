#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b==0){
        printf("Division with zero is not allowed.");
    }
    else{
        if (a%b==0){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
}