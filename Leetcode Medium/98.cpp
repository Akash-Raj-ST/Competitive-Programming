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
    bool isValidBST(TreeNode* root) {
        queue<TreeNode*> q;

        q.push(root);
        
        TreeNode*  node;
        
        while(!q.empty()){
            node = q.front();
            q.pop();
            
            if(node->left && node->left->val >= node->val) return false;
            if(node->right && node->right->val <= node->val) return false;
            
            if(node->left) q.push(node->left);
            if(node->right)  q.push(node->right);

        }
        return true;
    }
};