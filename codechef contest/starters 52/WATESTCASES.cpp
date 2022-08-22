#include <iostream>
#include <vector>
#include <cmath>
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

        string str;
        cin>>str;

        int min = INT32_MAX;

        for(int i=0;i<n;i++){
            if(s[i]==0){
                if(arr[i]<min) min=arr[i];
            }
        }

        cout<<min<<"\n";
    }
}