#include<stdio.h>
int main(){
    char name[100];
     int age ;
    char favorite hobby[100];
    scanf("%s\n",&name);
    scanf("%d",&age);
    scanf("%s",&favorite hobby);
    printf("Name: %s Age: %d\n",name,age);
    printf("Hobby: %s\n",favorite hobby);

}