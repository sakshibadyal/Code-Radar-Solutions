#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
  int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
       
    for(int k=1;k<=a;k++){
            printf("*");
        }
        a=a+2;
printf("\n");
    }
}