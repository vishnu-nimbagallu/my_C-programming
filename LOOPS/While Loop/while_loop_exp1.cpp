//in this example while loop used conditional loop 
#include<stdio.h>
int main(){
	int x=3;
	
	while(x>=3){
		(x%3 == 0) ?printf("%d is odd \n") : printf("%d is even\n");
		
		printf("enter a positive number:\n");
		scanf("%d",&x);
	}
	// if we enter any negative numbers the loops will terminates
	printf("loop terminates!");
	return 0;
}