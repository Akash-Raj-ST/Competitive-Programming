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

    int getMinimumDifference(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        if(root == NULL) return 0;

        vector<int> arr;

        while(!q.empty()){
            arr.push_back(q.front()->val);

            if(q.front()->left != NULL) q.push(q.front()->left);
            if(q.front()->right != NULL) q.push(q.front()->right);

            q.pop();
        }

        sort(arr.begin(),arr.end());

        int diff = INT_MAX;

        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]<diff) diff = arr[i]-arr[i-1];
        }

        if(diff==INT_MAX) return 0;
        return diff;
    }
};