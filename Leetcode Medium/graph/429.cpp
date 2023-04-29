/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;

        if(root==NULL) return ans;
        
        queue<Node*> q;
        q.push(root);

        ans.push_back(vector<int>{root->val});

        int count = 1;
        int new_count = 0;

        vector<int> arr;

        while(!q.empty()){

            Node* node = q.front();
            q.pop();

            count--;

            for(auto it:node->children){
                arr.push_back(it->val);
                q.push(it);
                new_count++;
            }

            if(count==0){
                if(!arr.empty())
                    ans.push_back(arr);
                count = new_count;
                new_count = 0;
                arr.clear();
            }
            cout<<"count: "<<count<<"\n";
        }

        return ans;
    }
};










