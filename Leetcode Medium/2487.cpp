/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;

        stack<ListNode*> valid;

        ListNode* node = head;
        while(node!=NULL){
            st.push(node);
            node = node->next;
        }


        ListNode* max_node = st.top();
        valid.push(max_node);
        st.pop();

        while(!st.empty()){
            node = st.top();
            st.pop();
            if(node->val>=max_node->val){
                max_node = node;
                valid.push(max_node);
            }
        }

        ListNode* h = valid.top();
        valid.pop();

        node = h;

        while(!valid.empty()){
            node->next = valid.top();
            node = node->next;
            valid.pop();
        }

        return h;

    }
};