#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll m=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        ll n = s.length(),i,value,sum=0;

        vector<ll> arr(n);

        for(i=0;i<n;i++){
            value = (i+1)*(n-i);
            if(s[i]=='0'){
                arr[i] = value;
            }else{
                arr[i] = -value;
                sum += value;
            }
        }
        
        ll maxi=0,maxi_2=0;
        for(i=0;i<n;i++){
            maxi += arr[i];

            if(maxi>maxi_2){
                maxi2 = maxi;
            }

            if(maxi<0){
                maxi = 0;
            }
        }

        cout<<sum+maxi_2<<"\n";
    }
}