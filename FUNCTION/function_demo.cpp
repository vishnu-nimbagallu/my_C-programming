#include<stdio.h>


void sub() {       //Subtraction block of code      
    int a, b, sub = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sub = a - b;
    printf("Sub: %d\n", sub);
}

void sum() {             //Addition block of code
    int a, b, sum = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
}


int main() {  
    // Calling sub() two times
    sub();
    sub();
        // Calling add() two times
    sum();
    printf("Hello!\n");
    sum();
    return 0; 
}