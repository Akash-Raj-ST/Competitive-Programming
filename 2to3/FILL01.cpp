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
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int count = 0,naps=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                count++;
                if(count==k){
                    naps++;
                    count=0;
                }
            }else{
                count=0;
            }
        }
        cout<<naps<<'\n';
    }
}