#include<stdio.h>
int main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	
	if(age<18)
	{
		printf("you are not eligible for driving");
	}
	else if(age>80)
	{
		printf("you are not eligible for driving because of older age");
	}
	else{
		printf("you are eligible for driving");
	}
	return 0;
}