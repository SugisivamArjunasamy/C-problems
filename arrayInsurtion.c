#include<stdio.h>
int main()
{
    int array[100];
    int n,poss=3;
    printf("Enter the elements off array");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=n;i>=poss;i--)
    {
        array[i]=array[i-1];
        array[2]=25;
    }
    return 0;
    
}