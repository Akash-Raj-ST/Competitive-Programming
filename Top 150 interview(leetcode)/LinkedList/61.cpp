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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL) return NULL;
        
        int len = 0;

        ListNode* temp = head;

        while(temp){
            len++;
            temp = temp->next;
        }

        k = k%len;

        if(k==0) return head;

        ListNode* ans = head;
        ListNode* end = NULL;
        ListNode* last = NULL;

        for(int i=0;i<(len-k);i++){
            end = ans;
            ans = ans->next;
        }

        end->next = NULL;

        last = ans;

        while(last->next){
            last = last->next;
        }

        last->next = head;

        return ans;
    }
};