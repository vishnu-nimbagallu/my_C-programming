#include<stdio.h>
int main()
{
	char grade;
	printf("enter your grade:");
	scanf("%c",&grade);
	switch(grade){
		
		case 'o':
		printf("outstanding!");
		break;
			
		case 'a':
		printf("very good!");
		break;
				
		case 'b':
		printf("good!");
		break;
					
		case 'c':
		printf("average!");
		break;
						
		default :
		printf("not valid grade!");
	}
	return 0;
}