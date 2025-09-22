#include<stdio.h>
int main(){
	int n,a=0,b=1,nextterm;
	printf("enter the n numbers:");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf("%d ",a);
		nextterm=a+b;
		a=b;
		b=nextterm;
	}
	return 0;
}