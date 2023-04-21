#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *next;
};


void append ( struct node **head, int data ) {
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=NULL;
	if(*head == NULL)
	{
	    *head=new_node;
	}
	else
	{
	    struct node *temp=*head;
	    while(temp->next!=NULL)
	    {
	        temp=temp->next;
	    }
	    temp->next=new_node;
	}
}

void display ( struct node *head)
{
    struct node *temp=head;
	while(temp!=NULL)
	{
	    printf(" %d",temp->data);
	    temp=temp->next;
	}
	 
}

void delete (struct node *head) {
	struct node *temp=head;
	head=head->next;
	free(temp);
	printf("\nThe elements in the linked list after deleting an element are");
    display(head);
    struct node *per=head;
    head=head->next;
    free(per);
	printf("\nThe elements in the linked list after deleting another element are");
    display(head);
    
}

int main() 
{
    struct node *head=NULL;
    int n,data;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&data);
        append(&head,data);
    }
    printf("\nThe elements in the linked list are");
    display(head);
    delete(head);
    
	return 0;
}