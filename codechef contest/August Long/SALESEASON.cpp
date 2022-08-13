#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int amt;
        cin>>amt;

        int dis = 0;

        if(amt<=1000 && amt>100) dis=25;
        else if(amt>1000 && amt<=5000) dis=100;
        else if(amt>5000) dis=500;

        cout<<amt-dis<<"\n";
    }
}