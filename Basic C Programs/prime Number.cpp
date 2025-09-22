#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2)
        printf("Entered number is prime\n");
    else
        printf("Entered number is not prime\n");

    return 0;
}
