//nested loop using FOR,WHILE
#include<stdio.h>
int main(){
	int  i;   
	//outer loop
	for(i=0;i<=3;i++)
	{
		int j=1;
		while(j<=3)
		{
		printf("i: %d j:%d \n",i,j);
		j++;
		}
		printf("inner loop ends here \n");
	}
	printf("outer loop ends here ");
	return 0;
}