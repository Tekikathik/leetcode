/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        priority_queue<long> pq;
        long long sum=0;
        while(!q.empty()){
            TreeNode * temp= q.front();
            q.pop();
            if (temp== NULL){
                pq.push(sum);
                sum=0;
                if (!q.empty()){
                    q.push(NULL);
			    }
		   }
		   else {
               sum+=temp->val;
			   if (temp->left){
                   q.push(temp->left);
			   }
			   if (temp->right){
                   q.push(temp->right);
			   }
           }
            
        }
        if (pq.size()<k) return -1;
        while (!pq.empty() && k>1) {
        pq.pop();
        k--;
        }
        return pq.top();
    }
};
