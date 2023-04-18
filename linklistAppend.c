#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node{
    int data;
    struct node *next;
};



void append ( struct node**head, int data ){
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
    }
    else
    {
        struct node*temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }
  
	
}

void display ( struct node*head ){
    struct node*p=head;
    printf("\n The elements in the linked list are ");
    while(p!=NULL){
        printf("%d->",p->data);
        p=p->next;
    }
	printf("NULL");
}


int main() {
    struct node *head=NULL;
    int n,data;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&data);
        append(&head,data);
    }
    display(head);
	return 0;
}
