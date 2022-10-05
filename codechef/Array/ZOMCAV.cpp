#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> rad(n,0);
        vector<int> zom(n,0);

        for(int i=0;i<n;i++) cin>>rad[i];
        for(int i=0;i<n;i++) cin>>zom[i];

        vector<int> radiation(n,0);
        vector<int> diff(n+1,0);

        for(int i=0;i<n;i++){
            int s = max(0,i-rad[i]);
            int e  = min(n-1,i+rad[i]);

            diff[s]++;
            diff[e+1]--;
        }

        radiation[0] = diff[0];
        for(int i=1;i<n;i++) radiation[i] = radiation[i-1]+diff[i];

        sort(zom.begin(),zom.end());
        sort(radiation.begin(),radiation.end());
        
        if(zom==radiation) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";

    }
}