#include<stdio.h>
int main()
{
	int eng=50,maths=50;
	float avg;
	
	avg=(float)(eng+maths)/2;
	if (avg >= 50 && (maths >= 35 && eng >= 35)){
      printf("Result: Pass");
   }

   if (avg<50) {
      printf("Result: Fail\n");
   }
   return 0;
}