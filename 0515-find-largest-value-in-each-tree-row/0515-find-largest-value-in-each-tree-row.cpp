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
    // function 
    vector<int> levelOrder(TreeNode *root) {
        vector<int> result;
        if (root == nullptr) return result;
        queue<TreeNode *> q;
        q.push(root);
        q.push(nullptr);
        int c=INT_MIN;
        while (q.size() > 1) {
            TreeNode *curr = q.front();
            q.pop();

        // Condition to check occurrence of next level
            if (curr == nullptr) {
                result.push_back(c); 
                c=INT_MIN;
                q.push(nullptr);                   
            } 
            else {
                if (curr->val >= c){
                    c=curr->val;
                }
                if (curr->left) q.push(curr->left);  
                if (curr->right) q.push(curr->right); 
            }
        }
        cout << c << endl;
        // if (c!=INT_MIN ) {
            result.push_back(c); 
        // }
        return result;
    }
    vector<int> largestValues(TreeNode* root) {
        if (root==NULL) return {};
        // if (root->val == 0) return {0};
        return levelOrder(root);
        
    }
};