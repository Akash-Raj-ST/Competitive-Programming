#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll M=1e9+1;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;

    while(t--){
        ll num,n,i;
        cin>>n;

        vector<bool> arr(M,false);

        for(i=0;i<n;i++){
            cin>>num;
            arr[num] = true;
        }

        ll count=0;
        for(i=1;i<M;i++){
            if(arr[i]){
                if(!(arr[i-1] || arr[i+1])){
                    arr[i+1] = true;
                    count++;
                }
            }
        }
        cout<<count<<'\n';
    }
}