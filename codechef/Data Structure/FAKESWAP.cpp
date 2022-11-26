// https://www.codechef.com/submit/FAKESWAP

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
        int n;
        cin>>n;

        string s1,s2;
        cin>>s1>>s2;

        int one=0,zero=0,one_to_zero=0,zero_to_one=0;

        for(int i=0;i<n;i++){
            if(s1[i]=='0' && s2[i]=='0') zero++;
            else if(s1[i]=='1' && s2[i]=='1') one++;
            else if(s1[i]=='0' && s2[i]=='1') zero_to_one++;
            else if(s1[i]=='1' && s2[i]=='0') one_to_zero++;
        }

        bool cond = true;


        if(zero_to_one==0 && one_to_zero==0){
            cout<<"YES"<<"\n";
            continue;
        }
        
        if(zero_to_one>one_to_zero){
            zero = one_to_zero;
            if(zero==0) cond = false;
        }else{
            one = zero_to_one;
            if(one==0) cond = false;
        }

        if(cond) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}