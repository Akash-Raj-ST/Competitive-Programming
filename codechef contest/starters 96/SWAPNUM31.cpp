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
        int n,k;
        cin>>n>>k;

        vector<int> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        vector<int> arr2;

        for(int i=0;i<n;i++){
            if(n-i>k || i>=k) arr2.push_back(arr[i]);
        }

        sort(arr2.begin(),arr2.end());

        int pos = 0;
        for(int i=0;i<n;i++){
            if(n-i>k || i>=k) arr[i]=arr2[pos++];
        }


        for(int i=0;i<n;i++) cout<<arr[i]<<' ';
        cout<<'\n';
    }
}