// https://codeforces.com/problemset/problem/1742/G

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
        ll n,i,j;
        cin>>n;

        vector<ll> arr(n);

        for(i=0;i<n;i++) cin>>arr[i];

        ll min = n>31?31:n;

        vector<bool> visited(n,false);

        ll max,max_index;
        ll max_or=0;

        for(i=0;i<min;i++){
            max = 0;
            max_index = -1;

            for(j=0;j<n;j++){
                if(visited[j]) continue;

                if((max_or|arr[j])>=max){
                    max = max_or|arr[j];
                    max_index = j;
                }
            }
            
            max_or |= arr[max_index];
            visited[max_index] = true;
            cout<<arr[max_index]<<" ";
        }

        for(i=0;i<n;i++){
            if(!visited[i]) cout<<arr[i]<<" ";
        }

        cout<<"\n";
    }
}