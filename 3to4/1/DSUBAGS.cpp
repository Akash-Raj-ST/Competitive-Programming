#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;

const ll M=1e9+7;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int n,query;
    cin>>n>>query;

    vector<vector<int>> arr(n+1);

    int distinct = n;
    bool flag;

    while(query--){
        int type;
        cin>>type;

        int a,b;
        switch (type)
        {
        case 1:{
            cin>>a>>b;

            flag = false;
            vector<bool> visited(n+1,false);

            queue<int> q;
            q.push(a);

            visited[a] = true;

            while(!q.empty()){
                int node = q.front();
                q.pop();

                visited[node] = true;

                for(auto it:arr[node]){
                    if(it==b){
                        flag=true;
                        break;
                    }

                    if(!visited[it]) q.push(it);
                }

                if(flag) break;
            }

            if(!flag){
                arr[a].push_back(b);
                arr[b].push_back(a);
                distinct--;
            }


            break;
        }
        
        case 2:{
            cin>>a>>b;

            flag = false;

            vector<bool> visited(n+1,false);

            queue<int> q;
            q.push(a);

            visited[a] = true;

            while(!q.empty()){
                int node = q.front();
                q.pop();

                visited[node] = true;

                for(auto it:arr[node]){
                    if(it==b){
                        cout<<"YES";
                        flag=true;
                        break;
                    }

                    if(!visited[it]) q.push(it);
                }

                if(flag) break;
            }

            if(!flag) cout<<"NO";

            break;
        }
        default:
            cout<<distinct;
            break;
        }

        if(query!=0 && type!=1) cout<<' ';
    }
}