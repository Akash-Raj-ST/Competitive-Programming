// https://www.codechef.com/problems/DDMMORMMDD

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;

const ll M=1e9+7;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        string a;
        cin>>a;

        int d1 = stoi(a.substr(0,2));
        int d2 = stoi(a.substr(3,2));
        if(d1<=12 && d2<=12) cout<<"BOTH\n";
        else if(d2<=12) cout<<"DD/MM/YYYY\n";
        else cout<<"MM/DD/YYYY\n";
    }
}