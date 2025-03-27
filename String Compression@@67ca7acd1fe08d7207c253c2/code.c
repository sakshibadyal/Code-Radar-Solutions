#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void compressString(char *str,char *compressed){
    int len=strlen(str);
    int index=0;
    for(int i=0;i<len;i++){
        compressed[index++]=str[i];
        int count =1;
        while(i+1<len && str[i]==str[i+j]){
            count ++;
            i++;
        }
        if(count>i){
            if num_len=sprintf(&compressed[index],"%d",count);
            index+=num_len;
        }
    }
    compressed[index]='\0';
    if(strlen(compressed)>=len){
        strcpy(compressed,str);
    }
}