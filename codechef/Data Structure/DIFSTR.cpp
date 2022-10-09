#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<string> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        string ans = "";

        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i][j++]=='1') ans += '0';
            else ans += '1';
        }
        cout<<ans<<"\n";
    }
}