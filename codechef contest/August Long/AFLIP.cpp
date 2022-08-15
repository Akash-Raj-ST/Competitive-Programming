#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll t;
    cin>>t;

    while(t--){
        ll n,m;
        cin>>n>>m;

        ll num,val;

        vector<ll> arr1_f,arr1_s;
        vector<vector<int>> a(n,vector<int>(m)),b(n,vector<int>(m));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                val = (i+j)%2;
                cin>>num;
                a[i][j] = num;
                if(val==0){ 
                    arr1_f.push_back(num);
                }
                else {
                    arr1_s.push_back(num);
                }
            }
        }

        vector<ll> arr2_f,arr2_s;

        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                val = (i+j)%2;
                cin>>num;
                b[i][j]=num;
                if(val==0){ 
                    arr2_f.push_back(num);
                }
                else{ 
                    arr2_s.push_back(num);
                }
            }
        }
        if(n==1 || m==1){
            if(a==b) cout<<"YES\n";
            else cout<<"NO\n";
            continue;
        }

        sort(arr1_f.begin(),arr1_f.end());
        sort(arr1_s.begin(),arr1_s.end());
        sort(arr2_f.begin(),arr2_f.end());
        sort(arr2_s.begin(),arr2_s.end());
        

        if(arr1_f==arr2_f && arr1_s==arr2_s) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";

    }
}