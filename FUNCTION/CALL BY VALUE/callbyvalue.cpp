#include <stdio.h>

// Function to swap two numbers (call by value)
void swap(int a,int b) {
    int temp =a;
    a = b;
    b = temp;
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main() {
    int num1 = 10,num2 = 20;

    printf("Before swap (in main):num1 = %d, num2 = %d\n", num1,num2);

    // Calling the swap function (passing copies of num1 and num2)
    swap(num1,num2);

    printf("After swap (in main):num1 = %d, num2 = %d\n", num1,num2);

    return 0;
}