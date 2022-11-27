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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        int len = 0;

        ListNode* temp = head;

        while(temp!=NULL){
            len++;
            temp = temp->next;
        }

        int q = len/k;
        int r = len%k;

        vector<int> arr(k,q);

        for(int i=0;i<r;i++){
            arr[i]++;
        }

        vector<ListNode*> ans;
        ListNode* node = head;

        for(int i=0;i<k;i++){
            int size = arr[i];
            ListNode* block = node;

            if(node==NULL){ 
                ans.push_back(block);
                continue;
            }

            while(--size){
                if(node!=NULL){
                    block->next = node->next;
                    
                }
            }
        }
        return ans;
    }
};