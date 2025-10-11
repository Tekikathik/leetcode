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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * result=NULL;
        int sum=0;
        while (l1!=NULL && l2 != NULL){
            sum+=l1->val+l2->val;
            ListNode* newnode=new ListNode(sum%10);
            sum/=10;
            l1=l1->next;
            l2=l2->next;
            if (result==NULL){
                result=newnode;
            }
            else {
                ListNode *tail=result;
                while (tail->next!=NULL){
                    tail=tail->next;
                }
                tail->next=newnode;
            }
            cout << newnode->val << endl;
        }
        while(l1 !=NULL){
            sum+=l1->val;
            ListNode* newnode=new ListNode(sum%10);
            sum/=10;
            l1=l1->next;
            if (result==NULL){
                result=newnode;
            }
            else {
                ListNode *tail=result;
                while (tail->next!=NULL){
                    tail=tail->next;
                }
                tail->next=newnode;
            }
        }
        while( l2 != NULL){
            sum+=l2->val;
            ListNode* newnode=new ListNode(sum%10);
            sum/=10;
            l2=l2->next;
            if (result==NULL){
                result=newnode;
            }
            else {
                ListNode *tail=result;
                while (tail->next!=NULL){
                    tail=tail->next;
                }
                tail->next=newnode;
            }
        }
        if (sum!=0){
            ListNode * newnode=new ListNode(sum);
            ListNode *tail=result;
            while (tail->next!=NULL){
                tail=tail->next;
            }
            tail->next=newnode;
        }
        return result;
    }
};