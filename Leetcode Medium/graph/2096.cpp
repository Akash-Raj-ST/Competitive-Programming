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
    string getDirections(TreeNode* root, int startValue, int destValue) {
        queue<pair<TreeNode*,string>> q;

        q.push({root,""});

        string s="",e="";
        bool s_flag=false,e_flag=false;

        while(!q.empty()){
            TreeNode* node = q.front().first;
            string dir = q.front().second;
            q.pop();

            if(node->val==startValue){
                s = dir;
                s_flag = true;
            }

            if(node->val==destValue){
                e = dir;
                e_flag = true;
            }

            if(s_flag && e_flag){
                break;
            }

            if(node->left!=NULL){
                q.push({node->left,dir+"L"});
            }

            if(node->right!=NULL){
                q.push({node->right,dir+"R"});
            }
        }

        string ans;
        int count = 0;
        for(int i=0;i<s.length();i++){
            if(i<e.length()){
                if(s[i]!=e[i]){
                   break;
                }else{
                    count++;
                }
            }
        }
        
        
        ans = string(s.length()-count,'U');
        ans += string(e.begin()+count,e.end());

        return ans;
    }
};