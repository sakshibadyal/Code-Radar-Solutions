#include<stdio.h>
int main(){
     char ch;
     scanf("%ch",&a);
     if(ch>='A'&& ch<='Z'){
        printf("Uppercase");
     }
     else if(ch<='a' && ch<='z'){
        printf("Lowercase");
     }
     else{
        printf("Not an alphabet");
     }
}