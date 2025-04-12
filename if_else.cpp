#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>18)
	{
		printf("You are eligible for driving");
	}
	else 
	{
		printf("you are not eligible for driving");
	}
	return 0;
}