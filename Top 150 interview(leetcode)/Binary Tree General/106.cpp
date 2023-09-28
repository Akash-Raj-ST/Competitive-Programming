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
    vector<int> inorder;
    vector<int> postorder;
    map<int,int> mp;

    TreeNode* solve(int inStart,int inEnd,int postStart,int postEnd){

        if(inStart>inEnd || postStart>postEnd) return NULL;
        
        TreeNode* node = new TreeNode(postorder[postEnd]);

        int index = mp[postorder[postEnd]];

        node->left = solve(inStart,index-1,postStart,postEnd-(inEnd-index+1));
        node->right = solve(index+1,inEnd,postStart+index-inStart,postEnd-1);

        return node;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        this->inorder = inorder;
        this->postorder = postorder;

        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        }

        return solve(0,inorder.size()-1,0,postorder.size()-1);
    }
};