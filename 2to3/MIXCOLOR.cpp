#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll M=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[arr[i]] += 1;
        }

        int sum = 0;
        
        for(auto it:mp){
            sum += it.second-1;
        }
        cout<<sum<<'\n';
    }
}