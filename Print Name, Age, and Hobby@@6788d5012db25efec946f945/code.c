#include<stdio.h>
int main(){
    char name[100];
    int age;
    char favorite hobby[100];
    scanf("%s %d %s",name,&age,favorite hobby);
    printf("NAME: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",favorite hobby);
    return 0;
}