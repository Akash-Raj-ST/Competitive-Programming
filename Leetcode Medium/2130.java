//2130. Maximum Twin Sum of a Linked List
//https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/


/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int pairSum(ListNode head) {
        int max = 0;
        List<Integer> li = new ArrayList<>();
        int n=0;
        while(head!=null){
            li.add(head.val);
            head = head.next;
            n++;
        }
        
        int twin,sum;
        for(int i=0;i<=n/2;i++){
            twin = n-1-i;
            sum = li.get(i)+li.get(twin);
            if(sum>max) max=sum;
        }
        
        return max;
    }
}