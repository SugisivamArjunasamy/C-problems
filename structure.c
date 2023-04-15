#include<stdio.h>
struct student{
    char name[50];
    int roll;
    float marks;
}s[5];

int main()
{
    int i;
    printf("Enter deatails about students");

    for(i=0;i<5;i++)
    {
        s[i].roll=i+1;
        printf("\nEnter for student %d",s[i].roll);
        printf("\nEnter name");
        scanf("%s",&s[i].name);
        printf("\nEnter marks",s[i].marks);
        scanf("%f",&s[i].marks);
    }
    printf("\nThe students deatails : \n");

    for(i=0;i<5;i++)
    {
        printf("\nRollnumber : %d",s[i].roll);
        printf("\nThe name of the student : %s",s[i].name);
        printf("\nThe marks : %.1f\n",s[i].marks);
    }

    return 0;
}