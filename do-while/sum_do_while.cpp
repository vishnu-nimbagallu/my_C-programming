#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter numbers (enter 0 to stop):\n");

    do {
        scanf("%d", &num);  // Read user input
        sum += num;          // Add the number to sum
    } while (num != 0);      // Loop until user enters 0

    printf("The sum of numbers is: %d\n", sum);

    return 0;
}