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
    int ans=INT_MIN;
    int funct(TreeNode* root){
        if (root==NULL){
            return 0;
        }
        int leftt=max(0,funct(root->left));
        int rightt=max(0,funct(root->right));
        ans=max(ans,root->val+leftt+rightt);
        return root->val+max(leftt,rightt);
    }
    int maxPathSum(TreeNode* root) {
        funct(root);
        return ans;
    }
};