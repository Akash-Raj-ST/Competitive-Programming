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

//O(1) for next and O(n) for space (n-> number of nodes)
class BSTIterator {
public:

    queue<TreeNode*> qu;

    void initialize(TreeNode* node){
        if(node==NULL) return;

        initialize(node->left);

        if(node!=NULL) qu.push(node);

        initialize(node->right);
    }

    BSTIterator(TreeNode* root) {
        initialize(root);
    }
    
    int next() {
        TreeNode* node = qu.front();
        qu.pop();

        return node->val;
    }
    
    bool hasNext() {
        return !qu.empty();
    }
};

//O(h) space complexity (h->height of tree)
class BSTIterator {
public:

    stack<TreeNode*> st;

    void initialize(TreeNode* node){
        while(node){
            st.push(node);
            node = node->left;
        }
    }

    BSTIterator(TreeNode* root) {
        initialize(root);
    }
    
    int next() {
        TreeNode* node = st.top();
        int ans = node->val;

        st.pop();
        initialize(node->right);


        return ans;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};


