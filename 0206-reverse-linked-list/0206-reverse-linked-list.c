/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *temp=head;
    struct ListNode * prev=NULL;
    struct ListNode * ne= NULL;
    if (temp == NULL){
        return head;
    }
    while  (temp != NULL){
        ne = temp->next; 
        temp->next = prev; 
        prev = temp;     
       temp = ne;
    }
    head=prev;
    return head;
    
}