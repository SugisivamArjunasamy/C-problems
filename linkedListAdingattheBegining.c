#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *next;
};


void insertAtBegining( struct node **head, int data )
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=*head;
    *head=new_node;
    
}

void display ( struct node *head )
{
    printf("\nThe elements in the linked list are ");
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head=NULL;
    int n,data;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&data);
        insertAtBegining(&head,data);
    }
    display(head);


	return 0;