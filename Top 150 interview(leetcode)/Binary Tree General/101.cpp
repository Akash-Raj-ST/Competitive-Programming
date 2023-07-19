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
    bool isSymmetric(TreeNode* root) {
        
        queue<TreeNode*> q1,q2;

        q1.push(root->left);
        q2.push(root->right);

        while(!q1.empty() && !q2.empty()){
            TreeNode* ele1 = q1.front();
            TreeNode* ele2 = q2.front();

            q1.pop();
            q2.pop();

            if(ele1==NULL && ele2==NULL) continue;
            if(ele1==NULL || ele2==NULL) return false;

            if(ele1->val != ele2->val) return false;

            q1.push(ele1->left);
            q1.push(ele1->right);
            q2.push(ele2->right);
            q2.push(ele2->left);

        }

        if(!q1.empty() || !q2.empty()) return false;
        return true;
    }
};