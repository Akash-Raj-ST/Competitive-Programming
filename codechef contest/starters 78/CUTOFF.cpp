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

    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end(),greater<int>());

        int val = arr[x-1];

        cout<<val-1<<'\n';
    }
}