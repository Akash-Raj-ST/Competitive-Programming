// https://www.codechef.com/submit/NEO01

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,i;
        cin>>n;

        vector<ll> arr(n);

        for(i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(),arr.end(),greater<>());
        
        ll pos_total=0,count=0,neg_total=0;
        ll total = 0;

        for(i=0;i<n;i++){
            if(arr[i]>=0){
                pos_total += arr[i];
                count++;
            }
            else{
                break;
            }
        }

        for(;i<n;i++){
            if((pos_total+arr[i])*(count+1)>pos_total*count+arr[i]){
                pos_total += arr[i];
                count++;
            }else{
                neg_total += arr[i];
            }
        }
        total += pos_total*count+neg_total;
        cout<<total<<"\n";

    }
}