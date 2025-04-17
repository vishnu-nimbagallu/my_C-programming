#include<stdio.h>
int main(){
	int x=3;
	
	while(x>=3){
		(x%3 == 0) ?printf("%d is odd \n") : printf("%d is even\n");
		
		printf("enter a positive number:\n");
		scanf("%d",&x);
	}
	printf("loop terminates!");
	return 0;
}