#include <stdio.h>
// Function declaration
void printPattern(int n);

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    // Function call
    printPattern(rows);
    
    return 0;
}

// Function definition
void printPattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}