#include<stdio.h>
int main(){
	int a=5;
	int b=12;
	// a=5 -->0101
	// b=12-->1100
	//result->0100--(13)
	int result =a | b;
	printf("  result is = %d\n ",result);
	return 0;
}