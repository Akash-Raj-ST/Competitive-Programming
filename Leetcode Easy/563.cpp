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
    int ans = 0;
    
    int inorder(TreeNode* node){
        if(node == NULL) return 0;

        int left = inorder(node->left);
        int right = inorder(node->right);

        ans += abs(left-right);
        
        return node->val+left+right;
    }


    int findTilt(TreeNode* root) {
        inorder(root);
        return ans;
    }
};