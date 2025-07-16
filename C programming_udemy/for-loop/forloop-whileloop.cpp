//using while loop insted of for loop
#include<stdio.h>
int main(){
	int n,i=1,fact=1;
	printf("enter the number:");
	scanf("%d",&n);
	//for(int i=1;i<=n;i++)
	while(i<=n)
	{
	fact=fact*i;
	i++;
	}
	
	printf("%d\n",fact);
		
	
}