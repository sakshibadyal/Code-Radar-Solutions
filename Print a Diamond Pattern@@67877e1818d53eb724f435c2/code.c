#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int a=n/2;
int b=1;
int c=n/2+1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=a;j++){
        printf(" ");
    }
    for(int k=1;k<=b;k++){
        printf("*");
        if(i<c){
a--;
b+=2;}
else{
a++;
b-=2;}
    }
    printf("\n");
}
}