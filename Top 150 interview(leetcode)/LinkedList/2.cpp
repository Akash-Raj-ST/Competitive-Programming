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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* head = ans;

        int rem = 0,_sum=0,val1,val2;
        while(l1!=NULL || l2!=NULL){

            if(l1!=NULL) val1 = l1->val;
            else val1 = 0;

            if(l2!=NULL) val2 = l2->val;
            else val2=0;

            _sum = val1+val2;

            ans->next = new ListNode((_sum+rem)%10);

            if((_sum+rem)>9){
                rem = 1;
            }else{
                rem = 0;
            }

            if(l1!=NULL) l1 = l1->next;
            if(l2!=NULL) l2 = l2->next;

            ans = ans->next;
        }

        if(rem){
            ans->next = new ListNode(1);
        }
        return head->next;
    }
};