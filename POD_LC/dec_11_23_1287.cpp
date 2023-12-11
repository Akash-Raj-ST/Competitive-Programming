class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> mp;

        for(auto it:arr){
            mp[it]++;
        }

        int size = arr.size();

        for(auto it:mp){
            if((double)it.second/(double)size>0.25) return it.first;
        }

        return -1;
    }
};