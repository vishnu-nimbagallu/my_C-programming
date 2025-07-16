#include<stdio.h>
int main(){
	int i=1,n,sum=0;
	printf("enter number n:");
	scanf("%d",&n);
	do{
	sum=sum+i;
	i=i+1;
}while(i<=n);
printf("%d\n",sum);

}