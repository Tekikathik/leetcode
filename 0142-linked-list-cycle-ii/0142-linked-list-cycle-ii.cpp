/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head==NULL){
            return NULL;
        }
        if (head->next==NULL){
            return NULL;
        }
        ListNode * temp=head;
        ListNode * temp1=head;
        int c=0;
        while (temp1 != NULL && temp1->next!= NULL){
            temp=temp->next;
            temp1=temp1->next->next;
            if (temp==temp1){
                c=1;
                break;
            }
        }
        if (c==0) return NULL;
        if (temp1 == NULL && temp1->next== NULL ) return NULL;
        temp1=head;
        // int c=0;
        while(temp1 != temp){
            temp1=temp1->next;
            temp=temp->next;
        }
        return temp;
    }
};