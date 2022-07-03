//https://leetcode.com/problems/count-number-of-nice-subarrays/

class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
        int n = nums.length;
        int arr[] = new int[n];
        
        int index = 0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==1) arr[index++] = i;
        }
        
        int p1,p2,p3,p4;
        int count = 0;
        for(int i=0;i<n;i++){
            if(i+k-1<index){
                p3 = arr[i+k-1];
            }else break;
            
            if(i==0) p1=0;
            else{
                p1 = arr[i-1]+1;
            }
            
            p2=arr[i];
            
            if(i+k<index) p4 = arr[i+k]-1;
            else p4 = n-1;
            
            count += ((p2-p1)+1)*((p4-p3)+1); 
            System.out.println("p1:"+p1+" p2:"+p2+" p3:"+p3+" p4:"+p4);
        }
        return count;
    }
}