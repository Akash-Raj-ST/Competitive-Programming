#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;

const ll M=1e9+7;

bool cmp(pair<ll,ll> a,pair<ll,ll> b){

    if(a.first==b.first){
        return a.second<b.second;
    }

    return (a.first+a.second)<(b.first+b.second);
}

ll max(ll a,ll b){
    if(a>b) return a;
    return b;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,x,i,j;
        cin>>n>>x;

        vector<ll> time(n),b(n);

        for(i=0;i<n;i++) cin>>time[i];
        for(i=0;i<n;i++) cin>>b[i];

        
        vector<pair<ll,ll>> data;

        for(i=0;i<n;i++){
            data.push_back({time[i],b[i]});
        }

        sort(data.begin(),data.end(),cmp);

        int cnt=0,_max=0;
        for(i=0;i<n;i++){
            if(data[i].first+data[i].second<=x){
                cnt++;
                _max = max(_max,data[i].second);
                x -= data[i].first+data[i].second;
            }else{
                break;
            }
        }

        for(;i<n;i++){
            if(data[i].first<=x){
                cnt++;
                break;
            }
            else if(_max+x>=data[i].first+data[i].second){
                cnt++;
                break;
            }
        }
        
        cout<<cnt<<'\n';
    }
}