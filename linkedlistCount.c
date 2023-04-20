#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *next;
};


void append ( struct node **q, int num ) {
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num;
	new_node->next=NULL;
	if(*q==NULL)
	{
	    *q=new_node;
	}
	else{
	    struct node*temp=*q;
	    while(temp->next!=NULL)
	    {
	       temp=temp->next; 
	        
	    }
	    temp->next=new_node;
    }
}

void display ( struct node *q ) {
    struct node*p=q;
    printf("\nThe elements in the linked list are ");
    while(p!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
    printf("NULL\n");
}

int count ( struct node * q ) {
    struct node *temp=q;
	int count=0,num=1;
	    while(temp->next!=NULL)
	    {
	        temp=temp->next;
	        count++;
	        num++;
	        
	    }
	    printf("The number of elements in the linked list is %d",num);
	
}




int main() {
    struct node *q=NULL;
    int n,data;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&data);
        append(&q,data);
    }
    display(q);
    count(q);

return 0;
}
