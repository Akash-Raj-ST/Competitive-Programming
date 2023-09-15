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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* next = head->next->next;

        ListNode* ans = NULL;
        ListNode* temp = NULL;

        if(head->val!=head->next->val){
            cout<<"head is "<<head->val<<' ';
            temp = new ListNode(head->val);
            ans = temp;
        }

        while(curr){
            if(curr->val!=prev->val && (next==NULL || curr->val!=next->val)){
                if(ans==NULL){
                    cout<<"Top is "<<curr->val<<' ';
                    ans = new ListNode(curr->val);
                    temp = ans;
                }else{
                    cout<<"next is "<<curr->val<<' ';
                    temp->next = new ListNode(curr->val) ;
                    temp = temp->next;
                }
            }

           if(next==NULL) break;

           prev = curr;
           curr = next;
           next = next->next;

        }
        return ans;
    }
};