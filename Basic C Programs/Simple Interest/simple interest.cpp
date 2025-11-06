#include <stdio.h>

int main() {
    int rate, time_t, price, total;

    printf("Enter rate, time, and price: ");
    scanf("%d %d %d", &rate, &time_t, &price);
    
    total = (rate * time_t * price) / 100;
    printf("The total value is: %d\n", total);

    return 0;
}
