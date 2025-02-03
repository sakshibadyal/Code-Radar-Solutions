#include <stdio.h>

int main() {
    int decimal;
    int size=16;
    scanf("%d",&decimal);
    if (decimal==0){
    printf("0");
    return 0;
    }
    int leadingZeroes=1;
    for(int i=size-1;i>=0;i--){
        int bit=(decimal>>i)&1;
        if(bit==1){
        leadingZeroes=0;

    }
    if(!leadingZeroes){
        printf("%d",bit);
    }
}
printf("\n");
}
