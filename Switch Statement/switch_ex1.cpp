#include <stdio.h>

int main() {
    int a;
    printf("Enter the value (1-5): ");
    scanf("%d", &a);

switch (a) {
    case 1:
    printf("O");
    break;
    
    case 2:
    printf("A+");
    break;
    
    case 3:
    printf("A");
    break;
    
    case 4:
    printf("B");
    break;
    
    default:
    printf("Invalid");
}
return 0;
}
   
