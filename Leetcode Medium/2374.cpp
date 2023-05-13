class Solution {
public:
    int edgeScore(vector<int>& edges) {
        map<int,long long> mp;
        
        int ans = -1;
        long long max=-1;
        for(int i=0;i<edges.size();i++){
            mp[edges[i]] += i;

            if(mp[edges[i]]>max){
                max = mp[edges[i]];
                ans = edges[i];
            }
            else if(mp[edges[i]]==max){
                if(edges[i]<ans){
                    ans=edges[i];
                }
            }
        }

        return ans;
    }
};