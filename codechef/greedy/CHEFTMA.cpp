// https://www.codechef.com/submit/CHEFTMA

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
        ll i,n,k,m;
        cin>>n>>k>>m;

        vector<ll> tasks(n),completed(n),arr(n),buttons(k+m);

        for(i=0;i<n;i++) cin>>tasks[i];
        for(i=0;i<n;i++) cin>>completed[i];

        for(i=0;i<k+m;i++) cin>>buttons[i]; 

        ll total_rem = 0;
        for(i=0;i<n;i++){
            arr[i] = tasks[i]-completed[i];
            total_rem += arr[i];
        }

        sort(buttons.begin(),buttons.end(),greater<>());
        sort(arr.begin(),arr.end(),greater<>());

        ll pos = 0;
        ll index = 0;
        while(pos<(n+m) && index<n){
            if(arr[index]>=buttons[pos]){
                total_rem -= buttons[pos];
                index++;
            }
            pos++;
        }
        cout<<total_rem<<"\n";
    }
}