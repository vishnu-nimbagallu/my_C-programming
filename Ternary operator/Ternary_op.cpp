#include<stdio.h>
int main(){
    int i;
    printf("Enter the number: ");
    scanf("%d", &i);
    i % 2 == 0 ? printf("even") : printf("odd");
    return 0;
}