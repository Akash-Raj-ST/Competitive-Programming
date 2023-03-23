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
        int n;
        cin>>n;

        int _min = 101,num;
        map<int,int> mp;

        for(int i=0;i<n;i++){
            cin>>num;
            if(num<_min) _min=num;

            mp[num] = mp[num]+1;
        }

        int rem = n - mp[_min];

        if(rem<mp[_min]) cout<<rem<<'\n';
        else cout<<mp[_min]<<'\n';

    }
}