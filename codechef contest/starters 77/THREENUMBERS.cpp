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
        vector<ll> arr(3);

        cin>>arr[0]>>arr[1]>>arr[2];

        sort(arr.begin(),arr.end(),greater<ll>());

        int count = 0,avg;
        if((arr[0]%2==0 && arr[1]%2==0 && arr[2]%2==0)||(arr[0]%2==1 && arr[1]%2==1 && arr[2]%2==1)){
            count = (arr[0]-arr[1])/2;
            arr[2] += count;
            count += (arr[1]+count)-arr[2];
        }
        else{
            cout<<"-1\n";
            continue;
        }

        cout<<count<<'\n';
    }
}