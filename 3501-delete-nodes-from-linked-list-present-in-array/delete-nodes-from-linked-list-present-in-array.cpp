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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int,int> mp;
        for (int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        ListNode *temp=head;
        while (head!=NULL && head->next!=NULL){
            if (mp.find(head->val)!=mp.end()){
                if (head==temp){
                    temp=head->next;
                }
                head=head->next;
            }
            else if (mp.find(head->next->val)!=mp.end() ){
                if (head->next->next!=NULL)
                head->next=head->next->next;
                else head->next=NULL;
            }
            else
            head=head->next;
        }
        return temp;
        
    }
};