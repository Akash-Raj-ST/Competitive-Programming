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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* node = head;

        ListNode* head2 = new ListNode(0);
        ListNode* curr = head2;

        int _sum=0;
        while(node!=NULL){
            if(node->val==0){
                cout<<_sum<<' ';
                if(_sum!=0){ 
                    curr->next = new ListNode(_sum);
                    curr = curr->next;
                }
                _sum = 0;
            }else{
                _sum += node->val;
            }

            node = node->next;
        }

        return head2->next;
    }
};