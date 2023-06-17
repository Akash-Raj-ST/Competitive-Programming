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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> a,b;
        a.push(p);
        b.push(q);

        if(p==NULL && q==NULL) return true;

        while(!a.empty() && !b.empty()){
            TreeNode* a1 = a.front();
            TreeNode* b1 = b.front();
            a.pop();
            b.pop();

            if(a1==NULL && b1==NULL) continue;
            else if(a1==NULL || b1==NULL) return false;

            if(a1->val!=b1->val) return false;

            a.push(a1->left);
            a.push(a1->right);

            b.push(b1->left);
            b.push(b1->right);
        }

        if(a.empty() && b.empty()) return true;
        return false;
    }
};