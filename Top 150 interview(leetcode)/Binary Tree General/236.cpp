/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    bool findPath(TreeNode* root,TreeNode* node,vector<TreeNode*> &path){

        if(root==NULL) return false;

        path.push_back(root);

        if(root->val==node->val) return true;

        if(root->left && findPath(root->left,node,path) || root->right && findPath(root->right,node,path)) return true;
        path.pop_back();

        return false;
        
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1,path2;

        findPath(root,p,path1);
        findPath(root,q,path2);

        int i=1;

        for(i=0;i<min(path1.size(),path2.size());i++){
            if(path1[i]->val!=path2[i]->val) break;
        }

        return path1[i-1];
    }
};