class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> ans;
        vector<int> arr;

        for(int i=m;i>0;i--) arr.push_back(i);

        for(int i=0;i<queries.size();i++){
            auto it = find(arr.begin(),arr.end(),queries[i]);
            int pos = m-(it-arr.begin());

            ans.push_back(pos-1);
            arr.erase(it);
            arr.push_back(queries[i]);
        }
        return ans;
    }
};