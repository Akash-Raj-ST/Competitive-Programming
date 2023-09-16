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
    ListNode* partition(ListNode* head, int x) {

        if(head==NULL) return NULL;

        ListNode* list_small = new ListNode(0);
        ListNode* list_big = new ListNode(0);

        ListNode* list_small_temp = list_small;
        ListNode* list_big_temp = list_big;

        ListNode* temp = head;

        while(temp){
            if(temp->val<x){
                list_small_temp->next = temp;
                list_small_temp = list_small_temp->next;
            }else{
                list_big_temp->next = temp;
                list_big_temp = list_big_temp->next;
            }

            temp = temp->next;
        }

        list_big_temp->next = NULL;

        list_small_temp->next = list_big->next;

        return list_small->next;

    }
};