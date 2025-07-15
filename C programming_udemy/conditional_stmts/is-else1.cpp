//Finding even or odd numbers using if-else
#include<stdio.h>
int main()
{
	int a;
	printf("Enter number:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("the entered number is even");
	}
	else
	{
		printf("the entered number is odd");
	}
	return 0;
}