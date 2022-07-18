#include <iostream>
#include <vector>
#include <algorithm>
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

        sort(arr.begin(),arr.end());

        int sum = 0,count = 0;

        for(int i:arr){
            sum += i;
            if(sum>=n) break;
            count++;
        }
        cout<<count<<"\n";
    }
}