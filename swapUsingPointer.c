#include<stdio.h>
int swap(int a,int b);
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before swap a=%d , b=%d",a,b);
    swap(&a,&b);
    return 0;
}


int swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
    printf("After swap a=%d , b=%d",a,b);
}
