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
        int x,y;
        cin>>x>>y;

        if(x==y){
            if(x%2==0){
                cout<<"CHEFINA";
            }else{
                cout<<"CHEF";
            }
        }
        else if(abs(x-y)>1){
            if(x>y) cout<<"CHEF";
            else cout<<"CHEFINA";
        }else{
            if(x%2==0){
                if(x>y) cout<<"CHEF";
                else cout<<"CHEFINA";
            }else{
                if(y>x) cout<<"CHEF";
                else cout<<"CHEFINA";
            }
        }

        cout<<'\n';
    }
}