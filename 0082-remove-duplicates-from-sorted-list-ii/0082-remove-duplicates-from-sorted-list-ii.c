/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode * temp=head;
    struct ListNode *dum=(struct ListNode *)malloc(sizeof(struct ListNode ));
    dum->next=temp;
    dum->val=0;
    struct ListNode *pre=dum;
    if (temp== NULL){
        return NULL;
    }
    int c=0;
    while ( temp!= NULL){
        if (temp->next != NULL && temp->val == temp->next->val){
            while (temp->next != NULL && temp->val == temp->next->val){
                temp=temp->next;
            }
            pre->next=temp->next;
        }
        else {
            pre=pre->next;
        }
        temp=temp->next;
    }
    return dum->next ;
    
}