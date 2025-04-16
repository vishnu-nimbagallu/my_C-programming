#include<stdio.h>
int main()
{
	char ch;
	printf("enter your schudle:");
	scanf("%c",&ch);
		switch(ch){
		
		case 'a':
		printf("yoga");
	    break;
		
		case 'b':
		printf("meditation");
		break;
		
		case 'c':
		printf("gym");
		break;
	}
	return 0;
}