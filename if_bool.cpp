#include<stdio.h>
int main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if(a<100)
	{
		printf("the entered number is less than 100");
	}
	if (a>=100 && a<=200)
	{
		printf("the entered num is between 100 to 200 ");
	}
	if (a>=200)
	{
		printf("the entered num is more than 200");
	}
	return 0;
}