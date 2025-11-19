#include<stdio.h>
int main(){
	
	//Implicite Conversion Done by the compiler on its own, without any external trigger from the user.
	int x=10;
	char c='a';
	
	x=x+c;	
	float f= c+ 2.0;
	printf("The values of X:%d \n c: %d\n f:%f",x,c,f);
	return 0;
}