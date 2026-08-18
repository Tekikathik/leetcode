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
    void levelorder(TreeNode* root ,int level,vector<vector<int>>& res){
        if (root==NULL) return ;
        if (res.size() <= level) res.push_back({});
        res[level].push_back(root->val);
        levelorder(root->left,level+1,res);
        levelorder(root->right,level+1,res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> v;
        levelorder(root,0,v);
        vector<int> result;
        for(int i=0;i<v.size();i++){
            result.push_back(v[i][v[i].size()-1]);
        }
        return result;
    }
};