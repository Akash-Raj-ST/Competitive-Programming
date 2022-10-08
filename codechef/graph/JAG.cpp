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

        vector<int> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        bool flag  =false;
        for(int i=1;i<n;i++){
            if(i != arr[i]-arr[0]){
                flag = true;
                break;
            }
        }

        if(flag) cout<<"1";
        else cout<<n;
        cout<<"\n";
    }
}