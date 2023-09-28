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

//inefficient method
class Solution {
public:

    vector<int> preorder;
    vector<int> inorder;

    int pos = 1;

    void partition(int val,vector<int>& left,vector<int>& right,vector<int> main){
        bool push_left = true;

        for(auto it:main){
            if(it==val){
                push_left = false;
                continue;
            }

            if(push_left){
                left.push_back(it);
            }else{
                right.push_back(it);
            }
        }

    }
    
    void solve(TreeNode* node,vector<int> left,vector<int> right){

        vector<int> new_left,new_right;

        // cout<<"for "<<node->val<<'\n';
        // cout<<"Left: ";
        // for(auto it:left) cout<<it<<' ';
        // cout<<"\nRight: ";
        // for(auto it:right) cout<<it<<' ';
        // cout<<'\n';

        if(left.size()>0){
            bool found = false;
            int left_val;

            for(int i=pos;i<preorder.size();i++){
                for(int j=0;j<left.size();j++){
                    if(preorder[i]==left[j]){
                        found = true;
                        left_val = left[j];
                        pos++;
                        break;
                    }
                }
                if(found) break;
            }

            node->left =  new TreeNode(left_val);
            partition(left_val,new_left,new_right,left);
            solve(node->left,new_left,new_right);
        }

        new_left.clear();
        new_right.clear();

        if(right.size()>0){
            bool found = false;
            int right_val;

            for(int i=pos;i<preorder.size();i++){
                for(int j=0;j<right.size();j++){
                    if(preorder[i]==right[j]){
                        found = true;
                        right_val = right[j];
                        pos++;
                        break;
                    }
                }
                if(found) break;
            }

            node->right =  new TreeNode(right_val);
            partition(right_val,new_left,new_right,right);
            solve(node->right,new_left,new_right);
        }


    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        this->preorder = preorder;
        this->inorder = inorder;

        TreeNode* head = new TreeNode(preorder[0]);

        vector<int> left,right;

        bool push_left = true;

        for(auto it:inorder){
            if(it==preorder[0]){
                push_left = false;
                continue;
            }

            if(push_left){
                left.push_back(it);
            }else{
                right.push_back(it);
            }
        }

        solve(head,left,right);

        return head;
    }
};

//optimized
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

    vector<int> preorder;
    vector<int> inorder;
    map<int,int> mp;

    TreeNode* solve(int preStart,int preEnd,int inStart,int inEnd){
        cout<<preStart<<' '<<preEnd<<' '<<inStart<<' '<<inEnd<<'\n';

        if(preStart>preEnd || inStart>inEnd) return NULL;

        TreeNode* node = new TreeNode(preorder[preStart]);

        int index = mp[preorder[preStart]];

        node->left = solve(preStart+1,preStart+index,inStart,index-1);
        node->right = solve(preStart+index+1-inStart,preEnd,index+1,inEnd);

        return node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        this->inorder = inorder;
        this->preorder = preorder;

        for(int i=0;i<inorder.size();i++) mp[inorder[i]]=i;

        return solve(0,preorder.size()-1,0,inorder.size()-1);
    }
};