// https://www.codechef.com/problems/RPDRDNG
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
        ll i,n;
        cin>>n;

        vector<ll> arr(2*n);

        for(i=0;i<2*n;i++) cin>>arr[i];

        sort(arr.begin(),arr.end());

        if(n==1){
            if(arr[0]==arr[1]){
                cout<<arr[0];
            }else{
                cout<<-1;
            }
            cout<<'\n';
            continue;
        }

        vector<ll> count(n+1,0);
        ll pos = 0;


        count[0] = 1;
        for(i=1;i<2*n;i++){
            if(arr[i]!=arr[i-1]) pos++;
            count[pos]++;
        }

        ll mid = n/2;

        if(!(count[mid]==3 && count[n-1]==1)){
            cout<<-1<<'\n';
            continue;
        }

        bool flag = false;
        for(i=0;i<n-1;i++){
            if(i==mid) continue;

            if(count[i]!=2){
                flag = true;
                break;
            }
        }

        if(flag){
            cout<<-1;
        }else{
            cout<<arr[0]<<' ';

            for(i=1;i<2*n;i++){
                if(arr[i]!=arr[i-1]) cout<<arr[i]<<' ';
            }
        }
        cout<<'\n';
    }
}