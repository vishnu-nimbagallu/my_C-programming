#include <stdio.h>
// Function declaration
void calculate(int a, int b, int *sum, int *product, float *average);

int main() {
    int x = 10, y = 20;
    int s, p;
    float avg;
    
    // Function call with addresses
    calculate(x, y, &s, &p, &avg);
    
    printf("Sum = %d\n", s);
    printf("Product = %d\n", p);
    printf("Average = %.2f\n", avg);
    
    return 0;
}

// Function definition
void calculate(int a, int b, int *sum, int *product, float *average) {
    *sum = a + b;
    *product = a * b;
    *average = (float)(a + b) / 2;
}