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
        int x,y,z;
        cin>>x>>y>>z;

        if((x*y)%z==0){
            cout<<x*y<<' '<<z;
        }
        else if((x*z)%y==0){
            cout<<x*z<<' '<<y;
        }
        else if((y*z)%x==0){
            cout<<y*z<<' '<<x;
        }else{
            cout<<-1;
        }
        cout<<'\n';
    }
}