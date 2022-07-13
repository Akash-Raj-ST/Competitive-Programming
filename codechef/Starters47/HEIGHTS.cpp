#include <iostream>
#include <map>
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

        int num;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>num;
            mp[num]++;
        }

        int count=0;
        for(auto item:mp){
            if(item.second==1) count++;
        }

        if(count%2==0) cout<<count/2<<"\n";
        else cout<<count/2+1<<"\n";
    }
}