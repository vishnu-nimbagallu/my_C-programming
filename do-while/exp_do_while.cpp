#include<stdio.h>
int main(){
	int a=11,b=11;
	printf("while output:\n");
	while(a<5)
	{
		a++;
	printf("a:%d \n",a);
	}
	printf("do while output:\n");
	do{
		b++;
		printf("b:%d \n",b);
		
	}
	while(b<5);
	
	return 0;
}

