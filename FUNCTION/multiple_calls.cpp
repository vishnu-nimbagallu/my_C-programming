#include<stdio.h>
void sum()
{
	//Function Decleration
    int a, b, sum = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("%d\n", sum);
}

int main()
{
	//Multiple Function Calls
    sum();
    printf("hello\n");
    sum();
    return 0;
}
