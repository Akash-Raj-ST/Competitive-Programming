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

    pair<TreeNode*,TreeNode*> solve(TreeNode* node){
        if(node==NULL) return {NULL,NULL};

        TreeNode* head = node;
        TreeNode* tail = node;

        auto left = solve(node->left);
        auto right = solve(node->right);

        if(left.first){
            node->right = left.first;
            left.second->right = right.first;
            tail = left.second;
        }

        node->left = NULL;

        if(right.first){
            tail = right.second;
        }

        return {head,tail};
    }

    void flatten(TreeNode* root) {
        solve(root);
    }
};