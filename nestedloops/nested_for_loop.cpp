//Nested loops(Loops within a loop)
#include<stdio.h>
int main(){
	int i,j;
	//outer loop
	for(int i=0;i<5;i++){
		//inner loop
		for(int j=0;j<5;j++){
			printf("i: %d j:%d \n",i,j);
		}
		printf("inner loop ends here \n");
	}
	printf("\n outer loop ends here");
	return 0;
}