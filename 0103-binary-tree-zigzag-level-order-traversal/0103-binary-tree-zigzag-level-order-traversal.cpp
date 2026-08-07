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
    void solve(vector<vector<int>>& ans, TreeNode* root){
        if (root==NULL) return;
        queue<TreeNode *> q;
        q.push(root);
        bool flag=false;
        while (!q.empty()){
            int size=q.size();
            vector<int> level;
            for (int i=0;i<size;i++){
                TreeNode * curr=q.front();
                q.pop();
                if (curr->left!=NULL) q.push(curr->left);
                if (curr->right!=NULL) q.push(curr->right);
                level.push_back(curr->val);
            }
            if (flag) 
            reverse(level.begin(),level.end());
            ans.push_back(level);
            flag=!flag;
        }

    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        solve(ans,root);
        return ans;
        
    }
};