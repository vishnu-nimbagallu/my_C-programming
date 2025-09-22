#include<stdio.h>
int main(){
	int numbers[10];
	int i,sum=0;
	float avg;
	
	printf("Enter the numbers:");
	for ( i=0 ; i<10 ; i++)
	{
		scanf("%d",&numbers[i]);
		sum +=numbers[i];
	}
	avg =sum/10.0;
	printf("%.2f\n",avg);
	return 0;
}