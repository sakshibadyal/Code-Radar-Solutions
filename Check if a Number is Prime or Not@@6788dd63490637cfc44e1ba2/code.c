#include <stdio.h>
int main(){
    int a,b;
    char operator;
    scanf("%d %d %c",&a,&b,&operator);
    switch(operator){
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
        case '/':
            if(b==0){
                printf("error\n");
            }
            else{
                printf("%d\n",a/b);

            }
            break;
        default:
        printf("Error: Invalid operator\n");
    }

    
    return 0;
}