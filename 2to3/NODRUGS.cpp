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
        int n,k,l;
        cin>>n>>k>>l;

        int max = 0,num;

        for(int i=0;i<n-1;i++){
            cin>>num;
            if(num>max) max=num;
        }

        cin>>num;

        if(num>max) cout<<"Yes\n";
        else{
            if(k<=0) cout<<"No\n";
            else{
                num = num+(k*(l-1));
                if(num>max) cout<<"Yes\n";
                else cout<<"No\n";
            }
        }
    }
}