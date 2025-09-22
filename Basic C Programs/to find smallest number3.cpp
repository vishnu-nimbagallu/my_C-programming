#include <stdio.h>
int main() {
    int numbers[10];
    int i, n, smallest;

    printf("Enter how many numbers (max 10): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    smallest = numbers[0]; // assume first number is smallest
    for (i = 1; i < n; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("Smallest number = %d\n", smallest);

    return 0;
}
