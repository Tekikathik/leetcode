/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode * merge(ListNode* list1, ListNode* list2){
        struct ListNode *temp=NULL,*head;
        if (list1== NULL && list2 == NULL){
            return NULL;
        }
        if (list1 == NULL) return list2;
        if (list2 == NULL ) return list1;
        if (list1->val<list2->val){
            temp=list1;
            list1=list1->next;
        }
        else{
            temp=list2;
            list2=list2->next;
        }
        head =temp;
        while (list1 != NULL && list2 !=NULL){
            if (list1->val<=list2->val){
                head->next=list1;
                list1=list1->next;
            }
            else {
                head->next=list2;
                list2=list2->next;
            }
            head=head->next;
        }
        if (list1!=NULL) head->next=list1;
        else
            if(list2!=NULL)
                head->next=list2;
        return temp;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size()==0 ) return NULL;
        if (lists.size()==1) return lists[0];
        ListNode * temp=merge(lists[0],lists[1]);
        for (int i=2;i<lists.size();i++){
           // / ListNode* temp=merge(lists[i],lists[i+1]);
            temp=merge(temp,lists[i]);
        }
        return temp;
    }
};