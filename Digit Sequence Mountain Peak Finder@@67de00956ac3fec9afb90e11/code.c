#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int mountainPeak(int N) {
    char str[20];
    sprintf(str, "%d", N); 
    int length = strlen(str);
    if (length < 3) {
        return -1; 
    }
    bool increasing = true;
    int peakIndex = -1;
    for (int i = 1; i < length; i++) {
        if (increasing) {
            if (str[i] > str[i - 1]) {
                peakIndex = i;
            } else if (str[i] < str[i - 1]) {
                increasing = false;
            } else {
                return -1;
            }
        } else {
            if (str[i] >= str[i - 1]) {
                return -1;
            }
        }
    }
    if (peakIndex == length - 1 || peakIndex == -1) {
        return -1; 
    }
    return str[peakIndex] - '0'; 
}