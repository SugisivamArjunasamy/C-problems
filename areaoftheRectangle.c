// finding the area of the rectangle
#include<stdio.h>
int main()
{
    int leanth,breath,area;
    printf("Enter the leanth of the rectangle : ");
    scanf("%d",&leanth);
    printf("Enter the breath of the rectanfle : ");
    scanf("%d",&breath);
    area=(leanth+breath)/2;
    printf("The are of the Rectangle is : %d",area);
    return 0;
}