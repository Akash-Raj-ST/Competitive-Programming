#include <iostream>
#include <vector>
#include <map>
#include <queue>
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
        ll n,x,y;
        cin>>n>>x>>y;


        vector<ll> arr(n);

        priority_queue<ll,vector<ll>,greater<ll>> pq;
        ll num;

        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(auto it:arr){
            pq.push(it);
        }
        
        bool print=true;
        while(y--){
            num = pq.top();
            num = num^x;
            pq.pop();
            if(n==1 || num<=pq.top()){
                print = false;
                if(y%2==0){
                    pq.push(num);
                    while(!pq.empty()){
                        cout<<pq.top()<<" ";
                        pq.pop();
                    }
                }else{
                    num = num^x;
                    pq.push(num);
                    while(!pq.empty()){
                        cout<<pq.top()<<" ";
                        pq.pop();
                    }
                }
                break;
            }else{
                pq.push(num);
            }
        }

        if(print) 
            while(!pq.empty()){
                cout<<pq.top()<<" ";
                pq.pop();
            }
        cout<<"\n";
    }
}