#include<stdio.h>

int main()
{
    int num1=10;
    int *ptr;
    ptr=&num1;
    printf("%d",num1);
    printf("%d",*ptr);
    
    return 0;
}