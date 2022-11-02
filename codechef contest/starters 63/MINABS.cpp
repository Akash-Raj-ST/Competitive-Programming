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
        ll n;
        cin>>n;

        string s1,s2;
        cin>>s1>>s2;

        int x,y,z,a;
        ll score = 0,cost1,cost2,tempscore;
        for(ll i=0;i<n;i++){
            a = (int)'a'-1;
            x = s1[i];
            y = s2[i];
            z = (int)'z';

            if(s1[i]<s2[i]){ 
                cost1 = y-x;
                cost2 = (z-y)+(x-a);
            }
            else{
                cost1 = (z-x)+(y-a);
                cost2 = x-y;
            }

            if(abs(score+cost1)<abs(score-cost2)){
                score += cost1;
            }else{
                score -= cost2;
            }
            
        }
        cout<<abs(score)<<"\n";
    }
}