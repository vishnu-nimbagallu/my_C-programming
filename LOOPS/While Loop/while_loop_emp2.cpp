#include<stdio.h>
int main()
{
	int age=19;
	while(age >=18){
		(age >= 18) ? printf("you are eligible for vote! \n") : printf("you are not eligible for vote \n");
		
		printf("enter your age :\n");
		scanf("%d",&age);
	}
	//if we enter age less than 18 then the loop will terminates
	printf("loop terminates !");
	return 0;
}