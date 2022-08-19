#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    ll n,needed,minimum,i;
    cin>>n>>needed>>minimum;

    vector<pair<ll,ll>> trees(n);
    ll height,rate;

    for(i=0;i<n;i++){ 
        cin>>height;
        cin>>rate;

        trees[i] = {height,rate};
    }

    ll low=0,high=100000,mid;
    ll ans=high,total_wood,wood;
    while (high>=low)
    {
        mid = (high+low)/2;
        total_wood = 0;

        for(auto it:trees){
            wood = it.first + (it.second*mid);
            if(wood>=minimum) total_wood += wood;
        }

        if(total_wood < needed){
            low = mid+1;
        }else{
            ans = mid;
            high = mid-1;
        }
    }
    cout<<ans<<"\n";

}