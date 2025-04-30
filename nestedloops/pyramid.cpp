#include<stdio.h>
#include<string>
int main(){
	int i,j,l;
	char x[]="lovely";
	l=strlen(x);
	for(i=0;i<l;i++)
	{
		for(j=0;j<=i;j++)
		{
			 printf("%c", x[j]);
		}
		printf("%c \n");
	}
	return 0;
	
} 