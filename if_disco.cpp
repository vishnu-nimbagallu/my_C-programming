#include<stdio.h>
int main(){
	int amount;
    int  discount ,net;
	printf("Enter the discount amount:");
	scanf("%d",&amount);
	
	if(amount<1000)
	{
		discount =10;
	}
	if(amount>=1000 && amount<2000 )
	{
		discount =5;
	}
	if(amount>=2000 && amount <3000)
	{
		discount =10;
	}
	net=amount-amount*discount/100;
	printf("Amount: %d Discount: %d Net payable: %d", amount, discount, net);
	return 0;
}