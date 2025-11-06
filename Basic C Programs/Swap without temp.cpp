#include<stdio.h>
int main(){
	int a =3,b=5;
	printf("Before swap a is %d and b is %d \n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
         printf("After swap a is  %d and b is %d ",a,b);
	return 0;
	
}