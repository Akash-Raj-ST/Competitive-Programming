// https://codeforces.com/contest/1732/problem/B

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

        string s;
        cin>>s;


        int prev = s[0];
        bool flag = false;
        int count = 0;
        for(int i=1;i<n;i++){
            if(flag){
                if(s[i]!=prev) count++;
            }else{
                if(s[i]<prev){ 
                    flag=true;
                    count=1;
                }
            }
            prev = s[i];
        }
        cout<<count<<"\n";
    }
}