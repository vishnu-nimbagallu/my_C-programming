#include<stdio.h>
int main(){
	int n,r,s=0,c;
	printf("enter any number:");
	scanf("%d",&n);
	c=n;
	while (n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if (c==s)
	printf("palindrome");
	else
	printf("not palindrome");
	return 0;
	
}