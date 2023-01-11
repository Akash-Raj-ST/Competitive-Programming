
#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;

    map<int,int> mp1,mp2;
    vector<pair<int,int>> ans;
    set<int> s;

    int id,price;
    for(int i=0;i<n;i++){
        cin>>id>>price;
        s.insert(id);
        if(mp1.find(id)!=mp1.end()){
            if(price<mp1[id]){
                mp1[id] = price;
            }
        }
        else mp1[id] = price;
    }

    for(int i=0;i<m;i++){
        cin>>id>>price;
        s.insert(id);
        if(mp2.find(id)!=mp2.end()){
            if(price<mp2[id]){
                mp2[id] = price;
            }
        }
        else mp2[id] = price;
    }

    for(auto it:s){

        if(mp1.find(it)!=mp1.end()){
            if(mp2.find(it)!=mp2.end()){
                if(mp1[it]<mp2[it]){
                    ans.push_back({mp1[it],it});
                }else{
                    ans.push_back({mp2[it],it});
                }
            }else{
                ans.push_back({mp1[it],it});
            }
        }else{
            ans.push_back({mp2[it],it});
        }
    }

    sort(ans.begin(),ans.end());

    for(int i=0;i<s.size();i++){
        if(i!=ans.size()-1) cout<<ans[i].second<<' '<<ans[i].first<<'\n';
        else cout<<ans[i].second<<' '<<ans[i].first;
    }
}

