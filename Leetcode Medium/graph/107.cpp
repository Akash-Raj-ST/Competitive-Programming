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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans(2001);

        queue<TreeNode*> q;
        q.push(root);

        struct TreeNode temp_node;
        temp_node.val = -1;

        struct TreeNode* temp = &temp_node;
        q.push(temp);

        vector<int> curr;

        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();

            cout<<node->val<<" ";

            if(node->val == -1){
                if(q.size()==0) break;
                
                ans.push_back(curr);
                curr.clear();

                struct TreeNode* temp = &temp_node;
                q.push(temp);

                continue;
            }

            curr.push_back(node->val);

            if(node->left){
                q.push(node->left);
            }

            if(node->right){
                q.push(node->right);
            }

        }


        return ans;
    }
};