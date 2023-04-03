#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <bits/stdc++.h>

#define ll long long int
using namespace std;

const ll M=1e9+7;

set<pair<int,int>> visited;
set<pair<int,int>> s;

void print(vector<vector<int>> arr,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int solve(int i,int j){

    queue<pair<int,int>> q;
    q.push({i,j});

    int count = 0;

    while(!q.empty()){
        int curr_i = q.front().first;
        int curr_j = q.front().second;

        q.pop();

        if(visited.count({curr_i,curr_j})) continue;

        visited.insert({curr_i,curr_j});


        count += 4;

        if(s.count({curr_i,curr_j+1})){
            count--;
            if(!visited.count({curr_i,curr_j+1}) ){
                q.push({curr_i,curr_j+1});
            }

        }

        if(s.count({curr_i+1,curr_j})){
            count--;
            if(!visited.count({curr_i+1,curr_j}) ){
                q.push({curr_i+1,curr_j});
            }
        }

        if(s.count({curr_i,curr_j-1})){
            count--;
            if(!visited.count({curr_i,curr_j-1}) ){
                q.push({curr_i,curr_j-1});
            }
        }

        if(s.count({curr_i-1,curr_j})){
            count--;
            if(!visited.count({curr_i-1,curr_j}) ){
                q.push({curr_i-1,curr_j});
            }
        }
        // cout<<count-prev_count<<" at "<<curr_i<<" "<<curr_j<<"\n";
    }

    return count;

}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t=1;

    while(t--){
        int r,c,n;
        cin>>r>>c>>n;

        vector<pair<int,int>> arr;

        int x,y;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            x--;
            y--;
            s.insert({x,y});
            arr.push_back({x,y});
        }


        int ans = 0;
        for(int i=0;i<n;i++){

            int Fi = arr[i].first;
            int Fj = arr[i].second;

            if(!visited.count({Fi,Fj})){
                ans = max(ans,solve(Fi,Fj));
            }
        }

        cout<<ans<<"\n";
    }
}