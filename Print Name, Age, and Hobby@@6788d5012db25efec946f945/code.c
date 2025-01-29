#include<stdio.h>
int main(){
    char name[100], favorite hobby;
    int age;
    scanf("%s %d %s",&name,&age,&favorite hobby);
    printf("\nName: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",favorite hobby);
}