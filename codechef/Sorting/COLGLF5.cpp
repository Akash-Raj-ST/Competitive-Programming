// https://www.codechef.com/submit/COLGLF5

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
        ll n,m,i,num;
        cin>>n>>m;

        vector<pair<ll,ll>> arr;

        for(i=0;i<n;i++){
            cin>>num;
            arr.push_back({num,1});
        }
        for(i=0;i<m;i++){
            cin>>num;
            arr.push_back({num,2});
        }

        sort(arr.begin(),arr.end());

        ll curr=1;

        ll switches = 0;

        for(auto it:arr){
            if(it.second!=curr){
                switches++;
                curr = it.second;
            }
        }

        cout<<switches<<"\n";
    }
}