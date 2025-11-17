#include <stdio.h>
#include <conio.h>  // required for getch() and getche()

int main() {
    char ch;

    printf("Press any key (using getch): ");
    ch = getch();       // takes input but does NOT display it
    printf("\nYou pressed (getch): %c\n", ch);

    printf("Press any key (using getche): ");
    ch = getche();      // takes input AND displays it
    printf("\nYou pressed (getche): %c\n", ch);

    return 0;
}
