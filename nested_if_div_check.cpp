#include<stdio.h>
int main(){
	int a=17;
	printf("a: %d\n",a);
	
	if(a %2 == 0)
	{
		if(a%3 ==0)
		{
			printf("the number divisible by 2 and 3");
		}
		else
		{
			printf("the number divisible by 2 not by 3 ");
		}
	}
	else{
		if(a%3 == 0)
		{
			printf("the number divisible by 3 but not by 2");
		}
		else
		{
			printf("the number not divisible by 3 not divisible by 2");
		}
	}
	return 0;
	
}