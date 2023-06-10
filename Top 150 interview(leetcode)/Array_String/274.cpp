class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end(),greater<int>());

        int ans = 0;
        for(int i=0;i<citations.size();i++){
            if(ans+1<=citations[i]) ans++;
            else break;
        }

        return ans;
    }
};