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
    priority_queue<
        pair<pair<int,int>, int>,
        vector<pair<pair<int,int>, int>>,
        greater<pair<pair<int,int>, int>>
    > pq;
    void inorder(TreeNode* root,int v,int h){
        if (root==NULL) return ;
        pq.push({{v,h},root->val});
        inorder(root->left,v-1,h+1);
        inorder(root->right,v+1,h+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        inorder(root,0,0);
        vector<vector<int>> v;
        int a=pq.top().second;
        int b=pq.top().first.first;
        pq.pop();
        vector<int> vv;
        vv.push_back(a);
        while(!pq.empty()){
            if (pq.top().first.first!=b){
                v.push_back(vv);
                vv.clear();
            }
            vv.push_back(pq.top().second);
            b=pq.top().first.first;
            pq.pop();
        }
        v.push_back(vv);
        return v;

        
    }
};