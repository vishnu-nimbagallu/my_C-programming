#include <stdio.h>

// Function prototype
void swapNumbers(int *a, int *b);

int main() {
    int num1 = 5, num2 = 10;
    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    // Call the swap function
    swapNumbers(&num1, &num2);
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}

// Function definition
void swapNumbers(int *a, int *b) {
    // Your code here to swap the values
}