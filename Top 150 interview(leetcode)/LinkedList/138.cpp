/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        map<Node*,Node*> mp;

        Node* ans = new Node(head->val);
        Node* node = ans;
        mp[head] = ans;

        Node* clone = node;
        Node* real = head;

        while(real->next!=NULL){
         
            clone->next = new Node(real->next->val);
            mp[real->next] = clone->next;
            clone = clone->next;
            real = real->next;
            
        }

        node = ans;

        while(node!=NULL && head!=NULL){
            if(head->random!=NULL){
                node->random = mp[head->random];
            }
            node = node->next;
            head = head->next;
        }
        return ans;
    }
};