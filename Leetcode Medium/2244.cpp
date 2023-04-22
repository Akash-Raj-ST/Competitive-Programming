class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;

        for(auto it:tasks){
            mp[it]++;
        }

        int ans=0,count;

        for(auto it:mp){
            count = it.second;

            if(count==1){
                return -1;
            }

            ans += count/3;
            if(count%3!=0){
                ans++;
            }
            
        }
       

        return ans;
    }
};