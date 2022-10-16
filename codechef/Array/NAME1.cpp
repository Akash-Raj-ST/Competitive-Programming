#include <iostream>
#include <vector>
#include <map>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    start:
    while(t--){
        string a,b;
        cin>>a>>b;
        int n;
        cin>>n;

        vector<string> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        map<char,int> mp;
        
        for(int i=0;i<a.length();i++)   mp[a[i]]++;
        for(int i=0;i<b.length();i++)   mp[b[i]]++;

        for(int i=0;i<n;i++){
            for(int j=0;j<arr[i].length();j++){
                if(mp[arr[i][j]]>0){
                    mp[arr[i][j]]--;
                }else{
                    cout<<"NO\n";
                    goto start;
                }
            }
        }

        cout<<"YES\n";

    }
}