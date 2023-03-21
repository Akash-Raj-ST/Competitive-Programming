class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& persons) {

        map<int,int> mp;

        for(int i=0;i<flowers.size();i++){
                mp[flowers[i][0]] += 1;
                mp[flowers[i][1]+1] -= 1;
        }

        int prev = 0;

        for(auto it:mp){
            mp[it.first] = prev+it.second;
            prev = mp[it.first];
        }

        vector<int> ans;
        for(auto it:mp){
            cout<<it.first<<' '<<it.second<<'\n';
        }

        mp[0] = 0;
        for(int i=0;i<persons.size();i++){
            auto it = mp.lower_bound(persons[i]);

            if(it->first==persons[i])
                ans.push_back(it->second);
            else{
                it--;
                ans.push_back(it->second);
            }
        }

        return ans;
    }
};