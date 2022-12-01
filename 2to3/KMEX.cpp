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
        int n,m,k,num;
        cin>>n>>m>>k;

        map<int,int> mp;

        for(int i=0;i<n;i++){
            cin>>num;
            mp[num]++;
        }

        if(m<k){
            cout<<"NO\n";
            continue;
        }

        int ele = 0;
        bool found = false,valid = true;

        for(int i=0;i<k;i++){
            if(mp[i]==0){
                valid = false;
                break;
            }
        }

        if(valid){
            for(auto it:mp){
                if(it.first!=k){
                    ele += it.second;
                }
                if(ele>=m){
                    found = true;
                    break;
                }
            }

            if(found) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}