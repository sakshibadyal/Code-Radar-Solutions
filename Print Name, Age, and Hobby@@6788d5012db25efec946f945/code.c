#include<stdio.h>
int main(){
    char name[100], favorite hobby;
    int age;
    scanf("%s %d %s",&name,&age,&favorite hobby);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",favorite hobby);
}