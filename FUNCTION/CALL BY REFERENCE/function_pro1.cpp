#include <stdio.h>
// Function declaration (prototype)
int addNumbers(int a, int b);

int main() {
    int num1 = 5, num2 = 7, sum;
    
    // Function call
    sum = addNumbers(num1, num2);
    
    printf("Sum = %d\n", sum);
    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}