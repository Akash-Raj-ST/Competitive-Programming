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
        ll n,m;
        cin>>n>>m;
        
        ll n_odd = n%2==0?n/2:n/2+1, n_even=n/2;
        ll m_odd = m%2==0?m/2:m/2+1, m_even=m/2;

        ll even=0,odd=0;
        
        even += n_odd*m_odd;
        even += n_even*m_even;

        odd += n_odd*m_even;
        odd += n_even*m_odd;

        if(odd==0 || (odd+even)%odd!=0) cout<<odd<<'/'<<odd+even;
        else{
            cout<<1<<'/'<<(odd+even)/odd;
        }
        cout<<'\n';
    }   
}