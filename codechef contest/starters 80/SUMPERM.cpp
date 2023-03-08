#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;

const ll M=1e9+7;

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
        int n;
        cin>>n; 

        if(n%2==1) cout<<"-1\n";

        else{
            for(int i=n;i>1;i-=2){
                if(i==2)
                    cout<<i-1<<' '<<i;
                else
                    cout<<i-1<<' '<<i<<' ';
            }
            cout<<'\n';
        }
    }
}