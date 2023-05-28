class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<vector<int>> adj(n);

        for(int i=0;i<paths.size();i++){
            int n1 = paths[i][0]-1;
            int n2 = paths[i][1]-1;

            adj[n1].push_back(n2);
            adj[n2].push_back(n1);
        }

        vector<vector<int>> arr(n,{1,2,3,4});

        vector<int> ans(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                if(arr[i][j]!=0){
                    ans[i] = arr[i][j];

                    for(auto it:adj[i]){
                        arr[it][j] = 0;
                    }

                    break;
                }
            }
        }

        return ans;
    }
};