#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%2!=0)
        a=1;
        else
        a=0;
        for(int j=1;j<=i;j++){
          printf("%d ",j);
          if(a==0)
          a=0;
          else
          a==1;
        }
        printf("\n");
    }
}