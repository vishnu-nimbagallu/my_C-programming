//while loop example 3
//printing even numbers between 1 to 50
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=50)
	{
		if(i%2==0)
	printf("%2d\t",i);
	
		i++;
	}
	return 0;
}