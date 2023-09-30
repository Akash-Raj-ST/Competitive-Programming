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

    bool isValid(TreeNode* node,TreeNode* min_node,TreeNode* max_node){
        if(node==NULL) return true;

        if((min_node && node->val<=min_node->val) || (max_node && node->val>=max_node->val))    
            return false;

        if(isValid(node->left,min_node,node) && isValid(node->right,node,max_node)) 
            return true;

        return false;
    }

    bool isValidBST(TreeNode* root) {
        
        if(root->left && root->left->val>=root->val && root->right && root->right->val<=root->val) 
            return false;

        return isValid(root->left,NULL,root) && isValid(root->right,root,NULL);
    }
};