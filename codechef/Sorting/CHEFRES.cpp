#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<pair<int,int>> interval;
        int a,b;

        for(int i=0;i<n;i++){
            cin>>a>>b;
            interval.push_back({a,b});
        }

        sort(interval.begin(),interval.end());

        for(int i=0;i<m;i++){
            cin>>a;
            if(a>=interval[n-1].second){
                cout<<-1<<"\n";
                continue;
            }

            if(a<=interval[0].first){
                cout<<interval[0].first-a<<"\n";
                continue;
            }

            int pos = lower_bound(interval.begin(),interval.end(),make_pair(a,0))-interval.begin();
            
            if(interval[pos-1].second>a){
                cout<<0<<"\n";
            }else{
                cout<<interval[pos].first-a<<"\n";
            }
        }
    }
}