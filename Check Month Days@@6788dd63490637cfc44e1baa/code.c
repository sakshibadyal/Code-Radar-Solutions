#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    switch(a){
        case 1 : case 3: case 5: case 7: case8: case 10: case12:
        printf("31");
        break;
        case 4: case 6: case9:case 12:
        printf("30");
        break;
        case 2:
        printf("28");
        break;
        default:
        printf("Invalid a");



    }
}