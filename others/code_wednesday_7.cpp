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
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int n;
    cin>>n;

    vector<int> arr(2*n);
    for(int i=0;i<n*2;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
   

    vector<bool> visited(2*n,false);
    int val;

    vector<int> ans;
    for(int i=0;i<2*n;i++){
        int _max=0,index=-1;

        if(visited[i]) continue;

        for(int j=i+1;j<2*n;j++){
            if(!visited[j]){
                val = __gcd(arr[i],arr[j]);
                if(val>_max){
                    _max = val;
                    index = j;
                }
            }
        }

        if(index!=-1){
            ans.push_back(_max);
            visited[index] = true;
        }
    
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        sum +=  ans[i]*(i+1);
    }
    cout<<sum;
}