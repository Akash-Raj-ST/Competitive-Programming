class Solution {
public:

    // vector<int> swap(vector<int> arr,int i,int j){
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     return arr;
    // }

    void recursive(vector<int>& nums,int pos,vector<vector<int>>& ans){
        if(pos==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=pos;i<nums.size();i++){
            swap(nums[i],nums[pos]);
            recursive(nums,pos+1,ans);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        recursive(nums,0,ans);

        return ans;
    }
};