/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:

    void solve(Node* node){
        queue<Node*> q;

        if(node) q.push(node);
        Node* prev = NULL;

        while(!q.empty()){

            int si = q.size();

            for(int i=0;i<si;i++){
                if(prev){
                    prev->next = q.front();
                }
                prev = q.front();

                if(prev->left) q.push(prev->left);
                if(prev->right) q.push(prev->right); 

                q.pop();
            }

            prev = NULL;
            
        }
    }


    Node* connect(Node* root) {
        solve(root);
        return root;
    }
};