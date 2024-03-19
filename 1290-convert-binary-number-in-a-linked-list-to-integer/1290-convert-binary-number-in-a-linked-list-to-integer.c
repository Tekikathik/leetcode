/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int d=0;
    while (head != NULL){
        d=d*2+head->val;
        head=head->next;
        
    }
    return d;
}