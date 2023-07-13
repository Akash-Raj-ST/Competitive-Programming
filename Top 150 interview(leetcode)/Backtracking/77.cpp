class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int n,int k,int ele,vector<int> output){

        if(output.size()==k){
            ans.push_back(output);
            return;
        }

        for(int i=ele;i<n;i++){
            output.push_back(i+1);
            backtrack(n,k,i+1,output);
            output.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        backtrack(n,k,0,{});
        return ans;
    }
};