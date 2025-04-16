#include<stdio.h>
int main()
{
	int a ;
	printf("enter a number:");
	scanf("%d",&a);
	
	if(a>=100){
		
		if (a<200)
		{
			printf("the entered number is between 100 to 200");
		}
		else
		{
			printf("the number is greater than 200");
		}
		
	}
	else
		{
			printf("the number is then 100");
		}
	return 0;
}