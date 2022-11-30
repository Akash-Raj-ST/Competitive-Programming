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
        int n;
        cin>>n;

        string arr;
        cin>>arr;

        int count = 0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n && j<=i+10;j++){
                if((j-i)==abs(arr[i]-arr[j])) count++;
            }
        }
        cout<<count<<'\n';
    }
}