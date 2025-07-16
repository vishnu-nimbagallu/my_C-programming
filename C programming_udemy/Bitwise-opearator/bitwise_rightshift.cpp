#include<stdio.h>
int main(){
	int a=10;
	int b = a >> 1;
	//here 10=1010
	//After right shift of 1 ,value of b is -->0101(5)
	printf("after completation of right-shift x is %d ",b);
	return 0;
}