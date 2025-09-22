#include<stdio.h>
int main(){
    int numbers[5];
    int sum=0;
 
    printf("enter the numbers:");
    for(int i =0;i<5;i++)
    {
        scanf("%d",&numbers[i]);
        sum+=numbers[i];
    }
   
     printf("%d\n",sum);
    return 0;
    
}