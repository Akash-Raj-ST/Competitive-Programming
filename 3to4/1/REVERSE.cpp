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

    int v,e;
    cin>>v>>e;
    
    vector<queue<int>> arr(v+1);
    int a,b;

    for(int i=0;i<e;i++){
        cin>>a>>b;

        if(a==b) continue;
        
        arr[a].push(b);
        arr[b].push(-1*a);
    }

    queue<pair<int,int>> q;
    vector<bool> visited(v+1,false);


    q.push({1,0});

    int _min = e;
    bool found = false;

    while(!q.empty()){

        int node = q.front().first;
        int count = q.front().second;

        q.pop();

        while(!arr[node].empty()){
            int temp_count = count;
            int it= arr[node].front();
            arr[node].pop();

            if(it<0){
                temp_count++;
            }

            if(abs(it)==e){
                found = true;
                if(temp_count<_min){
                    _min = temp_count;
                }
            }
            q.push({abs(it),temp_count});
        }
        
    }

    if(found)
        cout<<_min;
    else
        cout<<-1;
}