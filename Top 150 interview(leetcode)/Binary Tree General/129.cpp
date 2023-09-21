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

    int curr_sum = 0;
    int total_sum = 0;

    void recursive(TreeNode* node){
        if(node==NULL) return;

        curr_sum *= 10;
        curr_sum += node->val;

        if(node->left==NULL && node->right==NULL){
            total_sum += curr_sum;
        }

        recursive(node->left);
        recursive(node->right);
        
        curr_sum /= 10;
    }

    int sumNumbers(TreeNode* root) {
        recursive(root);
        return total_sum;
    }
};