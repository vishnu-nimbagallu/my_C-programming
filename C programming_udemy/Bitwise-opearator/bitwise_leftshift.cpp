#include<stdio.h>
int main(){
	int a=7;
	int b = a << 2;
	//here 7=0111
	//After left shift of 2 ,value of b is -->011100(28)
	printf("after completation of left-shift x is %d ",b);
	return 0;
}