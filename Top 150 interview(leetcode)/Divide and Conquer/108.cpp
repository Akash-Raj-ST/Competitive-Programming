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

    void recursive(vector<int> left,vector<int> right,TreeNode* node){
        int mid;

        //left
        if(left.size()>0){
            mid = left.size()/2;
            node->left = new TreeNode(left[mid]);
            recursive(vector<int>(left.begin(),left.begin()+mid),vector<int>(left.begin()+mid+1,left.end()),node->left);
        }

        //right
        if(right.size()>0){
            mid = right.size()/2;
            node->right = new TreeNode(right[mid]);
            recursive(vector<int>(right.begin(),right.begin()+mid),vector<int>(right.begin()+mid+1,right.end()),node->right);
        }

    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {

        int mid = nums.size()/2;
        int start=mid-1,end=mid+1;

        TreeNode* ans = new TreeNode(nums[mid]);
        TreeNode* head = ans;

        recursive(vector<int>(nums.begin(),nums.begin()+mid),vector<int>(nums.begin()+mid+1,nums.end()),head);
        return ans;
    }
};