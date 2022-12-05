//finding the sum of the digts.
#include<stdio.h>


int main(){
    int number1,sum=0,r;
    printf("Enter the numbers");
    scanf("%d",&number1);
    while(number1>0)
    {
     r=number1%10;
     sum=sum+r;
     number1=number1/10;
     
    }
    printf("The value of the sum is : %d",sum);
    return 0; 
}