/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

//  1026. Maximum Difference Between Node and Ancestor
//  https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/

class Solution {
    public int maxAncestorDiff(TreeNode root) {
        return recursive(root,root.val,root.val);
    }
    
    static public int recursive(TreeNode node,int max,int min){
        if(node==null){
            return max-min;
        }else{
             if(node.val>max) max = node.val;
             else if(node.val<min) min = node.val;
        }
        
       
        
        int l = recursive(node.left,max,min);
        int r = recursive(node.right,max,min);
        
        return Math.max(l,r);
    }
}