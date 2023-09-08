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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(left==right || head->next==NULL) return head;

        ListNode* top = NULL;
        ListNode* end = NULL;

        int count = 0;
        
        ListNode* temp = head;

        while(temp!=NULL){
            count++;

            if(count==left){
                break;
            }

            top = temp;
            temp = temp->next;

        }

        // cout<<"Top is "<<top->val<<'\n';
        temp = top;

        stack<ListNode*> st;

        if(temp==NULL){
            temp = head;
            st.push(head);
            count++;
        }

        while(temp!=NULL){

            if(count==right+1){
                end = temp->next;
                break;
            }

            if(temp->next==NULL) break;

            st.push(temp->next);
            temp = temp->next;

            count++;
        }

        temp = top;

        ListNode* ans;

        if(temp==NULL){
            temp = st.top();
            ans = temp;
            st.pop();
        }

        while(!st.empty()){
            temp->next = st.top();
        
            cout<<"adding "<<st.top()->val<<'\n';
            st.pop();
            temp = temp->next;
        }

        if(temp!=NULL) temp->next = end;

        if(left==1) return ans;
        return head;
    }
};