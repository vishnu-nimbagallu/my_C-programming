#include <stdio.h>

int main() {
    char str[30];
//This function is used for accepting any string until enter key is pressed (string will be covered later).

    printf("Enter any string: ");
     gets(str);
    printf("Entered string is: %s", str);

    return 0;
}
