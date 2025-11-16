#include <stdio.h>
int main(void)
{
    int *ptr;
    int x = 1234;

    ptr = &x;
    // Print the value stored at the pointer
    printf("The value of *ptr is: %d\n", *ptr);

    // Print the value of x
    printf("The value of x is: %d\n", x);
    return 0;
}
