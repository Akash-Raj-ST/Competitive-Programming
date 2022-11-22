// https://leetcode.com/problems/diameter-of-binary-tree/description/

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
    int sum = 0;

    int length(TreeNode *node){
        if(node==NULL){
            return 0;
        }

        int c1 = length(node->left);
        int c2 = length(node->right);

        if(c1+c2>sum) sum=c1+c2;

        return max(c1,c2)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        length(root);
        return  sum;
    }
};