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
        int n,num;
        map<int,int> mp;
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>num;
            mp[num]++;
        }

        int first=0,second=0;

        for(auto item:mp){
            if(item.second>first){
                second = first;
                first = item.second;
            }else if(item.second>second){
                second = item.second;
            }
        }

        if(first==second) cout<<first;
        else if(second==0) cout<<first/2+(first%2);
        else{
            first/2+(first%2)>second?cout<<first/2+(first%2):cout<<second;
        }

        cout<<"\n";
    }
}