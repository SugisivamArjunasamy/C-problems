/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int GetLength(struct ListNode* head)
{
	if (head == NULL)
		return 0;

	return 1 + GetLength(head->next);
}
struct ListNode* rotateRight(struct ListNode* head, int k){
        if (head == NULL || k == 0)
		return head;
    int length = GetLength(head);

	if (length == 1)
		return head;
    for(int i=0;i<k%length;i++)
    {
        struct ListNode *p=head;
        while(p->next->next!=NULL)
        {
            p=p->next;
        }
        struct ListNode *a=(struct ListNode *)malloc(sizeof(struct ListNode));
        a->val=p->next->val;
        a->next=head;
        head=a;
        p->next=NULL;
    }
    return head;

}
