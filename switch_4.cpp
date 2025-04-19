#include<stdio.h>
int main()
{
	char ch='g';
	switch(ch){
		case 'a' ...'z':
			printf(" %c entered char is lowercase letter ",ch);
			break;
			case 'A' ... 'Z':
				printf(" %c entered char is uppercase letter",ch);
				break;
				
				case 48 ... 57:
				printf("%c is digit ",ch);
				break;
				
				default :
				printf("%c is a non-alphanumeric character\n", ch);
	}
}