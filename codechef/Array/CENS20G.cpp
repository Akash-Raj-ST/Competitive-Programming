// https://www.codechef.com/submit/CENS20G?tab=statement

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
        string s;
        cin>>s;
        
        ll u=0,d=0,l=0,r=0;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='R') r++;
            else if(s[i]=='L') l++;
            else if(s[i]=='U') u++;
            else d++;
        }
        ll x,y;
        cin>>x>>y;

        ll q;
        cin>>q;

        while(q--){
            ll to_x,to_y;
            cin>>to_x>>to_y;
            
            bool x_l_pass=false,x_r_pass=false,y_u_pass=false,y_d_pass=false;
            
            if(x<to_x && r>=abs(x-to_x)) x_l_pass = true;

            if(x>=to_x && l>=abs(x-to_x)) x_r_pass = true;

            if(y<to_y && u>=abs(y-to_y)) y_d_pass = true;

            if(y>=to_y && d>=abs(y-to_y)) y_u_pass = true;

            if((x_l_pass||x_r_pass) && (y_d_pass||y_u_pass)){
                cout<<"YES "<<abs(x-to_x)+abs(y-to_y)<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
}