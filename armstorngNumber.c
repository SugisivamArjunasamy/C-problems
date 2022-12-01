#include <stdio.h>

int main(){
    int number,reminder,temvalue,sum=0,c;
    printf("Enter the number value : ");
    scanf("%d",&number);
    temvalue=number;
    while(number>0){
        reminder=number%10;
        c=reminder*reminder*reminder;
        sum=sum+c;
        number=number/10;
    }
    number=temvalue;
    if(sum==number)
     printf("The number is Amstrong");
    else
     printf("The number is not an Amstrong");


    return 0;  
}