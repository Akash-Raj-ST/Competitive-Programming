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
    int pos;
    int curr = 0;
    int ans = -1;

    void inorder(TreeNode* node){

        if(node==NULL) return;

        inorder(node->left);

        curr++;
        if(curr==pos){ 
            ans = node->val;
            return;
        }

        inorder(node->right);
        
    }

    int kthSmallest(TreeNode* root, int k) {
        this->pos = k;
        inorder(root);

        return ans;
    }
};