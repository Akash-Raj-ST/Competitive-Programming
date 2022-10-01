class Solution {
public:
    int gain(vector<int> v){
        vector<int> dp(v.size()+1,0);

        dp[0] = 0;
        dp[1] = v[0];

        int val1,val2;
        for(int i=1;i<v.size();i++){
            val1 = dp[i];
            val2 = dp[i-1]+v[i];
            dp[i+1] = val1>val2?val1:val2;
        }
        for(int i=0;i<dp.size();i++) cout<<dp[i]<<" ";
        return dp[dp.size()-1];
    }

    int deleteAndEarn(vector<int>& nums) {
        map<int,int> mp;
        vector<int> v;

        sort(nums.begin(),nums.end());

        mp[nums[0]] = nums[0];
        int prev = nums[0];
        int sum = 0;

        for(int i=1;i<nums.size();i++){
            if(nums[i]==prev || nums[i]-1==prev){
                mp[nums[i]] += nums[i];
            }else{
                for(auto it:mp)
                    v.push_back(it.second);
                
                sum += this->gain(v);
                mp.clear();
                v.clear();
                mp[nums[i]] = nums[i];
            }
            prev = nums[i];
        }

        if(!mp.empty()){
            
            for(auto it:mp)
                v.push_back(it.second);
            sum += this->gain(v);
            mp.clear();
            v.clear();
        }

        return sum;
    }
};