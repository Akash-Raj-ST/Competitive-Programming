/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        
        Node* ans = new Node(node->val);
        //real clone
        queue<pair<Node*,Node*>> q;
        q.push({node,ans});
        vector<bool> visited(101);
        map<int,Node*> mp;
        mp[ans->val] = ans;
        
        while(!q.empty()){
            Node* realNode = q.front().first;
            Node* cloneNode = q.front().second;
            q.pop();

            if(visited[realNode->val]) continue;
            visited[realNode->val] = true;

            vector<Node*> nei_arr;
            for(auto it:realNode->neighbors){
                Node* ne;
                if(mp.find(it->val)!=mp.end()){
                    ne = mp[it->val];
                }else{
                    ne = new Node(it->val);
                    mp[it->val] = ne;
                }
                nei_arr.push_back(ne);
                q.push({it,ne});
            }
            cloneNode->neighbors = nei_arr;

        }

        //test
        vector<bool> visit(101);

        queue<Node*> q1;
        q1.push(ans);

        while(!q1.empty()){
            Node* f = q1.front();
            q1.pop();


            if(visit[f->val]) continue;
            visit[f->val] = true;

            cout<<f->val<<':';

            for(auto it:f->neighbors){
                cout<<it->val<<' ';
                q1.push(it);
            }
            cout<<'\n';
        }

        visit = vector<bool>(101,false);
        cout<<"-----------\n";
        q1.push(node);

        while(!q1.empty()){
            Node* f = q1.front();
            q1.pop();


            if(visit[f->val]) continue;
            visit[f->val] = true;

            cout<<f->val<<':';

            for(auto it:f->neighbors){
                cout<<it->val<<' ';
                q1.push(it);
            }
            cout<<'\n';
        }

        return ans;

    }
};