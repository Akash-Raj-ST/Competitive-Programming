// https://codeforces.com/contest/1749/problem/A

#include <iostream>
#include <vector>
#include <map>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;
    
    start:
    while(t--){
        int n,m,x,y;
        cin>>n>>m;

        vector<pair<int,int>> pos;

        for(int i=0;i<m;i++){
            cin>>x>>y;
            pos.push_back({x,y});
        }

        map<int,int> col;
        map<int,int> row;


        for(auto it:pos){
            col[it.first]++;
        }
        for(auto it:pos){
            row[it.second]++;
        }

        int hit=0;
        for(auto it:col){
            if(it.second>2){
                cout<<"No\n";
                goto start;
            }

            hit += it.second-1;
        }

        for(auto it:row){
            if(it.second>2){
                cout<<"No\n";
                goto start;
            }
            hit += it.second-1;
        }

        if(hit>1 || (hit==0 && n==m)){
            cout<<"No\n";
            continue;
        }

        cout<<"Yes\n";
    }
}