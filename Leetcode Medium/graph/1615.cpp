
class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        map<int,int> mp;
        vector<vector<int>> arr(n,vector<int>(n,0));
        
        for(int i=0;i<roads.size();i++){
            mp[roads[i][0]]++;
            mp[roads[i][1]]++;
            arr[roads[i][0]][roads[i][1]]=1;
            arr[roads[i][1]][roads[i][0]]=1;
        }

        int ans=0,sum;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                sum = mp[i]+mp[j];
                cout<<i<<" "<<j<<" sum:"<<sum<<"\n";
                vector<int> v{i,j};
                vector<int> v1{j,i};

                if(arr[i][j]==1) sum--;
                if(sum>ans) ans = sum;
            }
        }
        
        

        return ans;
    }
};