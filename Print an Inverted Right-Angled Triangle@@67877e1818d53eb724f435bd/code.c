#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop through rows
    for (int i = n; i >= 1; i--) {
        // Print stars for each row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
