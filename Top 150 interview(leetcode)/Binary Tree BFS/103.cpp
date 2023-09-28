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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*> st;
        stack<TreeNode*> temp;

        vector<vector<int>> ans;

        st.push(root);

        if(root==NULL) return ans;

        bool rev = true;

        while(!st.empty()){
            int size = st.size();
            
            while(!temp.empty()) temp.pop();

            vector<int> arr;
            rev = !rev; 

            for(int i=0;i<size;i++){
                
                TreeNode* node = st.top();
                st.pop();
                
                arr.push_back(node->val);

                if(rev){
                    if(node->right) temp.push(node->right);
                    if(node->left) temp.push(node->left);
                }
                else{
                    if(node->left) temp.push(node->left);
                    if(node->right) temp.push(node->right);
                }
            }
            st = temp;
            ans.push_back(arr);
        }

        return ans;
    }
};