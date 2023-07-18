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

    static ListNode* mergeSort(ListNode* head){

        if(head==NULL || head->next==NULL){ 
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = NULL;

        while(fast!=NULL && fast->next !=NULL){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;
        ListNode* left_part = mergeSort(head);
        ListNode* right_part = mergeSort(slow);
    
        ListNode* ans = new ListNode(0);
        ListNode* ptr = ans;

        while(left_part!=NULL && right_part!=NULL){
            if(left_part->val<=right_part->val){
                ans->next = left_part;
                left_part = left_part->next;
            }
            else{
                ans->next = right_part;
                right_part = right_part->next;
            }
            ans = ans->next;
        }

     

        while(left_part!=NULL){
            ans->next = left_part;
            left_part = left_part->next;
            ans = ans->next;
        }

        while(right_part!=NULL){
            ans->next = right_part;
            right_part = right_part->next;
            ans = ans->next;
        }

    
        
        return ptr->next;

    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head; 

        ListNode* ans = mergeSort(head);
        return ans;
    }
};