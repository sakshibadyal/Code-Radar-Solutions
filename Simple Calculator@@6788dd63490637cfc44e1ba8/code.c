#include <stdio.h>
int main(){
    int a,b;
    char operator;
    scanf("%d %d %c",&a,&b,&operator);
    switch(operator){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case'*':
        printf("%d",a*b);
        break;
        case '/':
        if(b !=0){
            printf("%d",a/b);
         }
         else{
            printf("error");
         }
         break;
         default:
         printf("Error");
    }
}