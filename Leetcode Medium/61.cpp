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
        int size = 0;

        if(head==NULL) return NULL;
        
        ListNode* temp = head;

        while(temp != NULL){
            size++;
            temp = temp->next;
        }

        k = k%size;

        if(k==0) return head;

        ListNode* start = head;

        int end_pt = size-k;

        ListNode* new_head;
        temp = head;

        int count = 0;
        while(true){
            count++;

            if(count==end_pt){
                new_head = temp->next;
                temp->next = NULL;
                break;
            }
            temp = temp->next;
        }

        temp = new_head;

        while(temp!=NULL){
            if(temp->next==NULL){
                temp->next = head;
                break;
            }

            temp = temp->next;
        }

        return new_head;
    }
};




