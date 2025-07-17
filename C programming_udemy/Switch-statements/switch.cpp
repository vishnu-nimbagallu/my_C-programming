#include<stdio.h>
int main(){
	int a=2,b=1;
	switch(a+b)
	{
		case 1:printf("one\n");
		         break;
		case 2:printf("two\n");
		         break;
		case 3:printf("three\n");
		         break;    
		default :printf("The values are out of the cases");		     
	}
	return 0;
}