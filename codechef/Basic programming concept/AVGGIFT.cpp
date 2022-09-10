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
        int n,x;
        cin>>n>>x;

        vector<int> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        int min=arr[0],max=arr[0];

        for(int i=1;i<n;i++){
            if(arr[i]<min) min = arr[i];
            if(arr[i]>max) max = arr[i];
        }

        if(x>max || x<min) cout<<"NO";
        else cout<<"YES";
        cout<<"\n";
    }
}