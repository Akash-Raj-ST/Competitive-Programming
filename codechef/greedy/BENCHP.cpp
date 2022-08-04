#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    long long int t;
    cin>>t;

    while(t--){
        long long int n,w,wr;
        cin>>n>>w>>wr;

        long long int weight;
        long long int total = wr;

        map<long long int,long long int> mp;

        for(long long int i=0;i<n;i++){
            cin>>weight;
            mp[weight]++;
        }

        for(auto item:mp){
            total += (item.second-(item.second%2))*item.first;
        }

        if(total>=w) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}