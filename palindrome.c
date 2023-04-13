#include<stdio.h>
int main()
{
    int num1,num2,rev=0,remin;
    printf("Enter an integer");
    scanf("%d",&num1);
    num2=num1;

    while(num1!=0)
    {
        remin=num1%10;
        rev=rev*10+remin;
        num1/=10;
    }
    if(num2==rev)
        printf("%d is a polindrome number",num2);
    else
        printf("%d is a not an polindrome number",num2);
    

    
    
    return 0;
}
