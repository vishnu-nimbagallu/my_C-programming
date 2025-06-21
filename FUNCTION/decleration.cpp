#include<stdio.h>

    void sum(); //function decleration
    void sub();
    
	int main()      // functional calling
	{
		sum();
		sub();
	return 0;	
	}
	void sum(){     // function defination
		int a ,b,sum=0;
		printf("enter the two numbers:");
		scanf("%d %d",&a,&b);
		sum=a+b;
		printf("sum :%d\n",sum);
		
	}
void sub() {       //Subtraction block of code      
    int a, b, sub = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sub = a - b;
    printf("Sub: %d\n", sub);
}