#include<stdio.h>
int main(){
    float radius,area;
     const float pi=3.14;
    scanf("%f",&radius);
    area=pi*radius^2;
    printf("Area: %.2f",area);
    return 0;

}