#include <iostream>
#include <algorithm>
#include <vector>
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

        vector<int> arr;
        int num;

        for(int i=0;i<n;i++){
            cin>>num;
            arr.push_back(num);
        }

        bool found = true;
        for(int i=n;i>0;i--){
            if(i%arr.at(i-1)!=0){
                found = false;
                break;
            }
        }
        if(!found)  cout<<"NO"<<"\n";
        else    cout<<"YES"<<"\n";
    }
}