#include<stdio.h>
int main(){
	int x,y,z,max;
	printf("Enter any three values:\n");
	scanf("%d %d %d",&x,&y,&z);
	
	if(x>y && x>z)
	max=x;
	
	else if(y>z && y>x)
	max=y;
	
	else 
	max=z;
	printf("The max value is : %d",max);

	return 0;
}