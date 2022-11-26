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
        ll n,k,i;
        string s;

        cin>>n>>K>>s;

        vector<int> arr(n);

        if(s[0]=='1') arr[0] = 1;
        else arr[0]=0;

        ll max = 0;
        for(i=1;i<n;i++){
            if(s[i]=='1') arr[i] = arr[i-1]+1;
            else arr[i]=0;

            if(arr[i]>max) max = arr[i];
        }

        for(i=0;i<n;i++){
            if(arr[i]=0)
        }

    }
}