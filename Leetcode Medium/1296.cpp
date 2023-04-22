class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {

        int n = nums.size();

        if(n%k!=0) return false;

        map<int,int> mp;

        for(auto it:nums) mp[it]++;

        for(auto it:mp){
            int num = it.first;
            while(mp[num]!=0){
                for(int i=0;i<k;i++){
                    if(mp[num+i]==0) return false;
                    mp[num+i]--;
                }
            }
        }

        return true;
    }
};